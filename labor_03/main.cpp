#include <iostream>
#include <cstring>
#include "functions.h"
#include "extra.h"

void laborFeladatok() {
    cout<<"Harom a negyediken power1: "<<power1(3,4)<<endl;
 cout<<"Harom a negyediken recPower1: "<<power1(3,4)<<endl;
 cout<<"Harom a negyediken recPower2: "<<power1(3,4)<<endl;
 cout<<"LNKO 8,12 recGCD: "<<recGCD(8,12)<<endl;
 cout<<"LKKT 5,6 recLCM1: "<<recLCM1(5,6,5,6)<<endl;
 cout<<"LKKT 5,6 recLCM2: "<<recLCM2(5,6)<<endl;

 ///A tömb beolvasása és kiírása rekurzívan
 int a[10];
 ifstream f("bemenet.txt");
 int n;
 f>>n;
 recReadArray(a, n, (ifstream &) f);
 cout<<endl<<"A beolvasott tomb rekurzivan kiirva: ";
 recPrintArray(a,n);

 cout<<endl<<"A tomb paratlan elemeinek osszege: "<<sumOddElementsOfArray(a,n)<<endl;

 cout<<"A 323511 szam szamjegyei rekurzivan: ";
 printDigitsOfNumber(323511);
 cout<<endl<<"A 323511 szam szamjegyei rekurzivan visszafele: ";
 printDigitsOfNumberReverse(323511);
 cout<<endl<<"A 323511 szam szamjegyeinek atlaga rekurzivan: "<<averageDigitsOfNumber(323511,0,0);
}

///Check if a number is Palindrome
void egyesFeladat() {
    int n;
    cout << "Adj meg egy szamot!" << endl;
    cin >> n;
    cout << "Az " << n << (palindromE(n) ? " szam palindrom!" : " szam nem palindrom!") << endl;
}

///Program for length of a string using recursion
void kettesFeladat() {
    string s = "tesztelt";
    int n = stringHossza(s);
    cout<<"Az "<<s<<" string "<<n<<" karakter hosszu";
}

///First uppercase letter in a string (Recursive)
void harmasFeladat() {
    string s = "alma a fa alATt, nyaRi piros alma";
    int counter = 0;
    if (elsoNagybetu(s, counter) == 0)
        cout << "A stringben nincs nagybetu!" << endl;
    else cout << "A stringben az elso nagybetu az " << elsoNagybetu(s, counter) << endl;
}

///Count consonants in a string (Iterative and recursive methods)
void negyesFeladat() {
    string s = "teszt string";
    cout<<"A stringben "<<massalhangzoSzamlalo(s, stringHossza(s))<<" massalhangzo van";
}

///Recursive Implementation of atoi()
void otosFeladat() {
    char str[] = "112g";
    int n = strlen(str);
    cout<<stringbolIntbe(str,n);
}

int main() {
    //laborFeladatok();
    //egyesFeladat();
    //kettesFeladat();
    //harmasFeladat();
    //negyesFeladat();
    otosFeladat();
    return 0;
}
