/* Problem 04:
	    Write a program to build a lexical analyzer implementing the following regular expressions.
	    It takes a text as input from a file (e.g. input.txt) and displays output in console mode:
	        Integet variable = (i-nI-N)(a-zA-Z0-9)*
	        ShortInt Number = (1-9)|(1-9)(0-9)|(1-9)(0-9)(0-9)|(1-9)(0-9)(0-9)(0-9)
	        LongInt Number = (1-9)(0-9)(0-9)(0-9)(0-9)+
	        Invalid Input or Undefined = otherwise */

#include <bits/stdc++.h>
using namespace std;

bool isInt(string word) {
    if(word.size() == 0) return false;
    if(word[0] == '0') return false;
    for(int i = 1; i < word.size(); i++) {
        if(!isdigit(word[i])) return false;
    }
    return true;
}

bool isVariable(string word) {

    if(tolower(word[0]) < 'i' or tolower(word[0]) > 'n') return false;
    for(int i = 1; word[i]; i++) {
        if(isalnum(word[i])) continue;
        else return false;
    }
    return true;
}

int main() {

    freopen("input_4.txt", "r", stdin);
    string word;
    
    while(getline(cin, word)) {

        if(isVariable(word)) {
            cout << word << " : Integer Variable." << endl;
        } else if(isInt(word)) {
            if(word.size() <= 4) {
                cout << word << " : Short Integer" << endl;
            } else {
                cout << word << " : Long Integer" << endl;
            }
        } else {
            cout << word << " : Invalid input" << endl;
        }
    }
    return 0;
}
