#include<bits/stdc++.h>

using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right; 
    Node(char data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isOperator(char c) {
    return (c == '+' or c == '-' or c == '*' or c == '/' or c == '^');
}

int precedence(char c) {
    if(isOperator(c)) return 1;
    else
        return -1;
}

string infixToPostfix(string infix) {
    stack<char> st;
    st.push('N');
    int l = infix.length();
    string postfix;
    for(int i = 0; i < l; i++) {
        if(isdigit(infix[i])) return postfix;
        if(infix[i] != 'a' and infix[i] != 'b' and infix[i] != 'c' and !isOperator(infix[i]) and infix[i] != '(' and infix[i] != ')') return postfix;
        if(infix[i] == 'a' or infix[i] == 'b' or infix[i] == 'c') {
            postfix+= infix[i];
        } else if(infix[i] == '(') {
            st.push('(');
        } else if(infix[i] == ')') {
            while(st.top() != 'N' && st.top() != '(') {
                char c = st.top();
                st.pop();
                postfix += c;
            }
            st.pop();
        } else {
            while(st.top() != 'N' && precedence(infix[i]) <= precedence(st.top())) {
                char c = st.top();
                st.pop();
                postfix += c;
            }
            st.push(infix[i]);
        }
    }
    while(st.top() != 'N') {
        char c = st.top();
        st.pop();
        postfix += c;
    }
    return postfix;
}

bool isOperand(char ch) {
    return (ch == 'a' or ch == 'b' or ch == 'c');
}

Node* parse(string sentence) {
    
    stack<Node*> stack;
    
    for (char ch : sentence) {
        if (isOperand(ch)) {
            Node* node = new Node(ch);
            stack.push(node);
        } else if (isOperator(ch)) {
            Node* node = new Node(ch);
            node->right = stack.top();
            stack.pop();
            node->left = stack.top();
            stack.pop();
            stack.push(node);
        }
    }
    return stack.top();
}

void print(Node* root, int space = 0, int indent = 4) {
    if (root == NULL) return;
    space += indent;
    print(root->right, space);
    cout << endl;
    for (int i = indent; i < space; i++) {
        cout << " ";
    }
    cout << root->data << endl;
    print(root->left, space);
}

int main() {
    string sentence = "a*b+c";

    sentence = infixToPostfix(sentence);
    Node* tree = parse(sentence);
    print(tree);
    cout << endl;
    // cout << sentence << endl;
    return 0;
}

