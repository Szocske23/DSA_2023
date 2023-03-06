//
// Created by tivad on 2023. 02. 27..
//

#ifndef LABOR_03_EXTRA_H
#define LABOR_03_EXTRA_H

#include <string>
#include <iostream>

using namespace std;

///Check if a number is Palindrome
int szamFordito(int n, int temp);
bool palindromE(int n);

///First uppercase letter in a string (Recursive)
char elsoNagybetu(string s, int i);

///Program for length of a string using recursion
int stringHossza(string s);

///Count consonants in a string (Iterative and recursive methods)
bool massalhangzoE(char c);
int massalhangzoSzamlalo(string s, int n);

///Recursive Implementation of atoi()
int stringbolIntbe(char* s, int n);

#endif //LABOR_03_EXTRA_H
