#include <bits/stdc++.h>
using namespace std;

// Stack Node class
class Node {
public:
    char data;
    Node* next;
    Node(char value) {
        data = value;
        next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push a character onto the stack
    void push(char item) {
        Node* newNode = new Node(item);
        newNode->next = top;
        top = newNode;
    }

    // Pop a character from the stack
    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
};

// Function to check if parentheses are balanced
string checkBalanced(string expression) {
    Stack stack;

    for (char ch : expression) {
        if (ch == '(') {
            stack.push(ch);  // Push opening parenthesis
        } else if (ch == ')') {
            if (stack.isEmpty()) {
                return "Not Balanced";  // Closing parenthesis without matching opening
            }
            stack.pop();  // Match this closing with an opening
        }
    }

    // If stack is empty, all parentheses matched
    return stack.isEmpty() ? "Balanced" : "Not Balanced";
}

int main() {
    int testCases;
    
    cin >> testCases;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  

    for (int i = 1; i <= testCases; ++i) {
        string expression;
        getline(cin, expression);

        cout << "Expression " << i << ": " << checkBalanced(expression) << endl;
    }

    return 0;
}
