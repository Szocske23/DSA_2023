#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    int n,*tomb;
    readArray(tomb,n,"bemenet.txt");
    printArray(tomb,n);
    printReverseArray(tomb,n);
    return 0;
}
