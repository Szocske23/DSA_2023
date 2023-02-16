#include <iostream>
#include "Array.h"
#include "Matrix.h"

using namespace std;

int main() {
    /*int n,*tomb;
    readArray(tomb,n,"bemenet.txt");
    printArray(tomb,n);
    printReverseArray(tomb,n);*/

    int n,m,**matrix;
    readMatrix(matrix,n,m,"bemenet2.txt");
    printMatrix(matrix,n,m);
    return 0;
}
