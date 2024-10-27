# Compiler Design Lab

This repository contains various programming problems and their solutions related to compiler design concepts. Below is a list of problems with descriptions and links to the respective code files.

## Problem - 01: String Analysis
**Problem description**: Write a C/C++ program that reads the following string: "Md. Tareq Zaman, Part-3, 2011"

(a) Count number of words, letters, digits, and other characteristics.  
(b) Separates letters, digits, and other characters.

**Description**: The program should read the specified string and analyze it. It should count the total number of words, letters, digits, and special characters (like punctuation and spaces). Additionally, it should separate these components and display them in distinct groups.  
**View Code**: [Problem_01.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_01.cpp)

---

## Problem - 02: String Analysis
**Problem description**: Write a program that reads the following string: "Munmun is the student of Computer Science & Engineering".

(a) Count how many vowels and consonants are there?  
(b) Find out which vowels and consonants are present in the above string?  
(c) Divide the given string into two separate strings, where one string only contains the words starting with vowels, and the other contains words starting with consonants.

**Description**: The program should analyze the given string to count the vowels and consonants. It should also identify which specific vowels and consonants appear in the string. Finally, it should split the words into two separate groups: one where words start with a vowel and another where words start with a consonant.  
**View Code**: [Problem_02.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_02.cpp)

---

## Problem - 03: String Abbreviation
**Problem description**: Write a program that abbreviates the following code: CSE-3141 as "Computer Science & Engineering, 3rd year, 1st Semester, Compiler Design, Theory."

**Description**: This program should interpret the code CSE-3141 and expand it into its full form, detailing what each part of the code represents, including the department, year, semester, and course details.  
**View Code**: [Problem_03.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_03.cpp)

---

## Problem - 04: Lexical Analysis
**Problem description**: Write a program to build a lexical analyzer implementing the following regular expressions. It takes a text as input from a file (e.g., input.txt) and displays output in console mode:

- Integer variable: (i-nI-N)(a-zA-Z0-9)*  
- ShortInt Number: (1-9)|(1-9)(0-9)|(1-9)(0-9)(0-9)|(1-9)(0-9)(0-9)(0-9)  
- LongInt Number: (1-9)(0-9)(0-9)(0-9)(0-9)+  
- Invalid Input or Undefined: otherwise

**Description**: The program functions as a lexical analyzer that reads input from a file and classifies the text into integer variables, short integers, long integers, or invalid inputs. It uses regular expressions to recognize these types and outputs the classification results.  
**View Code**: [Problem_04.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_04.cpp)

---

## Problem - 05: Lexical Analysis
**Problem description**: Write a program to build a lexical analyzer implementing the following regular expressions. It takes a text as input from a file (e.g., input.txt) and displays output in console mode:

- Float variable: (a-hA-Ho-zO-Z)(a-zA-Z0-0)*  
- Float Number: 0.(0-9)(0-9)|(1-9)(0-9)*.(0-9)(0-9)  
- Double Number: 0.(0-9)(0-9)(0-9)+|(1-9)(0-9)*.(0-9)(0-9)(0-9)+  
- Invalid input or Undefined: Otherwise

**Description**: This lexical analyzer reads input from a file and classifies the text as float variables, float numbers, double numbers, or invalid inputs based on specified regular expressions. It processes the data and provides the result in console mode.  
**View Code**: [Problem_05.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_05.cpp)

---

## Problem - 06: Lexical Analysis
**Problem description**: Build a lexical analyzer implementing the following regular expressions:

- Character variable: ch_(a-zA-Z0-9)(a-zA-Z0-9)*  
- Binary variable: bn_(a-zA-Z0-9)(a-zA-Z0-9)*  
- Binary Number: 0(0|1)(0|1)*  
- Invalid Input or Undefined: Otherwise

**Description**: This program recognizes character and binary variables, binary numbers, and invalid inputs by using specified regular expressions. It reads input, classifies it, and outputs the results, helping to identify the structure of different types of data.  
**View Code**: [Problem_06.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_06.cpp)

---

## Problem - 07: Lexical Analysis
**Problem description**: Write a program to recognize C++:

(i) Keyword  
(ii) Identifier  
(iii) Operator  
(iv) Constant

**Description**: The program reads a C++ code segment and identifies keywords, identifiers, operators, and constants. It uses pattern matching to categorize each part of the code, making it easier to understand the role of each component in a C++ program.  
**View Code**: [Problem_07.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_07.cpp)

---

## Problem - 08: Tokenization
**Problem description**: Write a program which converts a word of a C++ program to its equivalent token.

**RESULT**:
- Input: 646.45, Output: Float  
- Input: do, Output: Keyword  
- Input: 554, Output: Integer  
- Input: abc, Output: Identifier  
- Input: +, Output: Arithmetic Operator  

**Description**: This program reads individual words from a C++ program and converts them into their corresponding token types, such as float, keyword, integer, identifier, or operator. It simplifies understanding the type of each word in the given context.  
**View Code**: [Problem_08.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_08.cpp)

---

## Problem - 09: Syntax Analysis
**Problem description**: Write a program that will check an English sentence given in the present indefinite form to justify whether it is syntactically valid or invalid according to the following Chomsky Normal Form:

**Grammar Rules**:
- S → SUB PRED  
- SUB → PN|P  
- PRED → VIV N  
- PN → Sagor | Selim | Salma | Nipu  
- P → he| she |I/ we | you | they  
- N → book | cow | dog | home | grass | rice | mango  
- V → read | eat | take | run | write  

**Description**: The program checks if a given sentence matches the specified grammar rules in the present indefinite form. It determines whether a sentence is syntactically valid based on a defined set of subjects, verbs, and nouns.  
**View Code**: [Problem_09.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_09.cpp)

---

## Problem - 10: Parsing
**Problem description**: Write a program to implement a shift-reducing parser.

**Description**: The shift-reduce parser is a type of bottom-up parser used for syntax analysis. This program reads input expressions or statements and applies shift and reduce operations based on predefined grammar rules to construct a parse tree or validate syntax.  
**View Code**: [Problem_10.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_10.cpp)

---

## Problem - 11: Syntax Tree Generation
**Problem description**: Write a program to generate a syntax tree for the sentence a+b*c with the following grammar:

E → E+E | E-E | E*E | E/E | (E) | a | b | c

**Description**: This program creates a syntax tree for the given expression a+b*c, using the specified grammar rules. The tree visually represents the structure of the expression, showing the precedence of operators and the order of evaluation.  
**View Code**: [Problem_11.cpp](https://github.com/nazmulhasan77/Compiler_Design_Lab/blob/main/Problem_11.cpp)

