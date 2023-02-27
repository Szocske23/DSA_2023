#include <iostream>
#include "functions.h"

int main() {
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

            //EXTRA FELADATOK
    return 0;
}
