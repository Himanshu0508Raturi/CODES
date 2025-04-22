package CODES.Java.Term_work;
/* Program to Extract Substring from a String with Equal 0, 1, and 2. 
Input: str = “102100211” 
Output: 5 
Explanation: "102" , "021" , "210" , " 021" , "210021" these are combinations can be formed 
where the occurrence of 0 , 1 and 2 all are equal. */
public class Q4 {
    public class Equal012Substring {

        public static int longestEqual012Substring(String str) {
            int maxLength = 0;
            int n = str.length();
            for (int i = 0; i < n; i++) {
                int count0 = 0, count1 = 0, count2 = 0;
    
                for (int j = i; j < n; j++) {
                    char ch = str.charAt(j);
    
                    if (ch == '0') count0++;
                    else if (ch == '1') count1++;
                    else if (ch == '2') count2++;
    
                    if (count0 == count1 && count1 == count2) {
                        maxLength = Math.max(maxLength, j - i + 1);
                    }
                }
            }
        
            return maxLength;
        }
    
        public static void main(String[] args) {
            String str = "102100211";
            System.out.println("Longest length: " + longestEqual012Substring(str));
        }
    }
    
}
