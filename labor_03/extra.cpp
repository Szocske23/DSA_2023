//
// Created by tivad on 2023. 02. 27..
//

#include <cstring>
#include "extra.h"

///Check if a number is Palindrome
int szamFordito(int n, int temp) {
    if (n == 0)
        return temp;
    temp = (temp * 10) + (n % 10);
    return szamFordito(n/10,temp);
}

bool palindromE(int n) {
    return (n == szamFordito(n,0));
}

///Program for length of a string using recursion
int stringHossza(string s) {
    if(s == "\0")
        return 0;
    return 1 + stringHossza(s.erase(0,1));
}

///First uppercase letter in a string (Recursive)
char elsoNagybetu(string s, int i) {
    if(i == stringHossza(s))
        return 0;
    if(isupper(s[i]))
        return s[i];
    return elsoNagybetu(s,i+1);
}

///Count consonants in a string (Iterative and recursive methods)
bool massalhangzoE(char c)
{
    string maganhangzok="AEIOUaeiou";
    return (maganhangzok.find(c) == string::npos && c >= 'A' && c <= 'z');
}

int massalhangzoSzamlalo(string s, int n)
{
    if(n == 1) return massalhangzoE(s[0]);
    return massalhangzoSzamlalo(s,n-1) + massalhangzoE(s[n-1]);
}

///Recursive Implementation of atoi()
int stringbolIntbe(char* s, int n) {
    int c=0, check;

    for(int i=0; i<= strlen(s); i++) {
        check = isalpha(s[i]);
        if (check) c++;
    }

    if(c != 0) return 0;

    if(n == 1) return *s - '0';

    return (10 * stringbolIntbe(s, n-1) + s[n-1] - '0');
}



