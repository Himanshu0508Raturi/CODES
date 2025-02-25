#include<iostream>
#include<string>
using namespace std;

void push(char st[], char ch, int *top) {
    st[++(*top)] = ch;
}

char pop(char st[], int *top) {
    if (*top == -1) return '\0';  // Stack underflow protection
    char ch = st[(*top)--];
    return ch;
}

bool isempty(int top) {
    return top == -1;
}

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '[' && closing == ']') ||
           (opening == '{' && closing == '}');
}

int main() {
    int n, top = -1;
    string s;
    cout << "Enter an expression: " << endl;
    getline(cin, s);
    n = s.length();
    char st[n];

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(st, s[i], &top);
        } 
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (isempty(top)) {
                cout << "Not matched.";
                return 0;
            }
            char poppedChar = pop(st, &top);
            if (!isMatchingPair(poppedChar, s[i])) {
                cout << "Not matched.";
                return 0;
            }
        }
    }

    if (isempty(top)) {
        cout << "Matched";
    } else {
        cout << "Not matched.";
    }

    return 0;
}
