#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[] = "Md. Tareq Zaman, Part-3, 2011";
    string letter, digit, other;
    int i = 0, words = 0, letters = 0, digits = 0, others = 0;

    // Count number of words, letters, digits, and other characters
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            letters++;
            letter.push_back(str[i]);
        } else if (isdigit(str[i])) {
            digits++;
            digit.push_back(str[i]);
        } else if (str[i] == ' ') {
            words++;
        } else {
            others++;
            other.push_back(str[i]);
        }
        i++;
    }
    words++; // Increment words for the last word

    cout << "Number of words: " << words << endl;
    cout << "Number of letters: " << letters << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of other characters: " << others << endl;

    // Separating letters, digits, and other characters
    cout << "Letters: ";
    for (char c : letter) {
        cout << c << " ";
    }
    cout << "\nDigits: ";
    for (char c : digit) {
        cout << c << " ";
    }
    cout << "\nOther characters: ";
    for (char c : other) {
        cout << c << " ";
    }

    return 0;
}
