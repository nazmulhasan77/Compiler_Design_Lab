//Problem 01
//     Write a C/C++ program tha read the following string: "Md. Tareq Zaman, Part-3, 2011"
// 	    a) Count number of words, letters, digits and other characteristics
// 	    b) Separates letters, digits and others characters.


#include<bits/stdc++.h>

int main() {
    char str[] = "Md. Tareq Zaman, Part-3, 2011";
    int i, words = 0, letters = 0, digits = 0, others = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] == ' ' || str[i] == ',' || str[i] == '-') {
            words++;
        } else {
            others++;
        }
    }

    // Last word doesn't have space after it
    words++;

    printf("Number of words: %d\n", words);
    printf("Number of letters: %d\n", letters);
    printf("Number of digits: %d\n", digits);
    printf("Number of other characters: %d\n", others);

    // Separating letters, digits, and other characters
    printf("\nLetters: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            printf("%c ", str[i]);
        }
    }

    printf("\nDigits: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            printf("%c ", str[i]);
        }
    }

    printf("\nOther characters: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]) && !isdigit(str[i]) && str[i] != ' ' && str[i] != ',' && str[i] != '-') {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
