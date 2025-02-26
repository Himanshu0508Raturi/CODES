package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
public class Q9_Bank
{
String name , address ;
int accno;
double balance;
void setName(String name)
{
	this.name = name;
}
void setAddress(String address)
{
	this.address = address;
}
void setAccno(int i)
{
	this.accno = accno + 1001 + i;
}
void setBalance(double balance)
{
	this.balance = balance;
}
int getacc()
{
	return accno;
}
void display() {
System.out.println("Name: " + name + "\n" + 
					"Address: " + address + "\n" + 
					"Account Number: " + accno + "\n" + 
					"Balance:INR " + balance);
}

void deposit(int amt)
{
	balance += amt;
	System.out.println("INR " + amt+" has been successfully deposited.\n" + "Total amount is: "+balance);
}
void withdraw(int amt)
{
	if(amt > balance)
	{
		System.out.println("Insufficient Balance availble.");
	}else
	{
		balance -= amt;
		System.out.println(amt+" has been successfully withdrawed.\n" + "Total amount is: "+balance);
	}		
}
void changeAddress(String add)
{
	System.out.println("Address has been successfully changed from "+ address + " to " + add);
	address = add;
	
}
public static void main(String args[])
{
	int n;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter Number of depositors: ");
	n = sc.nextInt();
	Q9_Bank depositors[] = new Q9_Bank[n];
	for(int i = 0 ; i < n ; i++)
	{
		depositors[i] = new Q9_Bank();
	}
	for(int i = 0 ; i < n; i++)
	{
		String name , address ;
		//int accno;
		double balance;
		
		System.out.println("Enter Details of "  + " user:- " +(1001+i)+":" );
		System.out.print("Enter Name: ");
		name = sc.next();
		depositors[i].setName(name);
		System.out.print("Enter Address: ");
		address = sc.next();
		depositors[i].setAddress(address);
		depositors[i].setAccno(i);
		System.out.print("Enter Balance: ");
		balance = sc.nextDouble();
		depositors[i].setBalance(balance);
	}
	int choice;
	
	int accno;
	System.out.print("Enter account number to operate: ");
	accno = sc.nextInt();
	do
	{
	System.out.println("Press:\n" + "1 to Deposit Money\n" + "2 to withdraw money\n" + "3 to Change addres\n"+ "4 to display Information\n"+ "5 to exit.");
	choice = sc.nextInt();
	switch(choice)
	{
		case 1:
				{
					int amt;
					System.out.println("Enter amount to deposit: ");
					amt = sc.nextInt();
					for(int i = 0 ; i < n ;i++)
					{
						if(depositors[i].getacc() == accno)
						{
							depositors[i].deposit(amt);
							break;
						}
					}
					break;
				}
		case 2:
				{
					int amt;
					System.out.println("Enter amount to Withdraw: ");
					amt = sc.nextInt();
					for(int i = 0 ; i < n ;i++)
					{
						if(depositors[i].getacc() == accno)
						{
							depositors[i].withdraw(amt);
							break;
						}
					}
					break;
				}
		case 3:
				{
					String add;
					System.out.println("Enter New address: ");
					add = sc.next();
					for(int i = 0 ; i < n ;i++)
					{
						if(depositors[i].getacc() == accno)
						{
							depositors[i].changeAddress(add);
							break;
						}
					}
					break;
				}
		case 4:
				{
					for(int i = 0 ; i < n ;i++)
					{
						if(depositors[i].getacc() == accno)
						{
							depositors[i].display();
							break;
						}
					}
					break;
				}					
	}
}while(choice != 5);
System.out.println("Exiting System.Thank you......");
sc.close();
}
}