//
// Created by tivad on 2023. 02. 27..
//

#include "functions.h"

int power1(int x, int n) {
    int p=1;
    for (int i = 0; i < n; ++i) {
        p*=x;
    }
    return p;
}

int recPower1(int x, int n) {
    if(n==0)
        return 1;
    else
        return recPower1(x,n-1)*x;
}

int recPower2(int x, int n) {
    int h;
    if(n==0)
        return 1;
    else
        if(n%2==0) {
            h = recPower2(x, n / 2);
            return h*h;
        }
        else {
            h = recPower2(x, (n - 1) / 2);
            return h*h*x;
        }
}

int recGCD(int a, int b) {
    if(a != b) {
        if(a > b)
            return recGCD(a-b,b);
        else
            return recGCD(a,b-a);
    }
    else return a;
}

int recLCM1(int a, int b, int a1, int b1) {
    if(a>b) {
        if(a%b != 0) {
            a += a1;
            recLCM1(a, b, a1, b1);
        }
        else return a;
    }
    else {
        if(b%a != 0) {
            b += b1;
            recLCM1(a, b, a1, b1);
        }
        else return b;
    }
}

int recLCM2(int a, int b) {
    return a*b/recGCD(a,b);
}

void recReadArray(int *a, int n, ifstream &f) {
    if(n > 0) {
        recReadArray(a,n-1,f);
        f>>a[n];
    }
}

void recPrintArray(int *a, int n) {
    if(n > 0) {
        recPrintArray(a,n-1);
        cout<<a[n]<<" ";
    }
}

int sumOddElementsOfArray(int *a, int n) {
    if(n==0)
        return 0;
    else
        if(a[n]%2==1) return a[n] + sumOddElementsOfArray(a,n-1);
        else return sumOddElementsOfArray(a,n-1);
}

void printDigitsOfNumber(int n) {
    if(n != 0) {
        printDigitsOfNumber(n / 10);
        cout << n % 10 << " ";
    }
}

void printDigitsOfNumberReverse(int n) {
    if(n != 0) {
        cout << n % 10 << " ";
        printDigitsOfNumberReverse(n / 10);
    }
}

float averageDigitsOfNumber(int n, int numberOfDigits, int sum) {
    if(n == 0)
        return float(sum)/float(numberOfDigits);
    else
        averageDigitsOfNumber(n/10,numberOfDigits+1,sum+n%10);
}
