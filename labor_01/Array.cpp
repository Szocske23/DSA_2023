//
// Created by tivad on 2023. 02. 16..
//

#include "Array.h"

int *initializeArray(int numberOfElements) {
    return new int[numberOfElements];
}

void readArray(int *&array, int &numberOfElements, char *input) {
    ifstream f(input);
    if(!f) {
        cout<<"A fájl nem megnyitható!"<<endl;
        exit(1);
    }
    f>>numberOfElements;
    array = initializeArray(numberOfElements);
    for (int i = 0; i < numberOfElements; ++i) {
        f>>array[i];
    }
    f.close();
}

void printArray(int *array, int numberOfElements) {
    for (int i = 0; i < numberOfElements; ++i) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void printReverseArray(int *array, int numberOfElements) {
    for (int i = numberOfElements-1; i >= 0; --i) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void printArrayToFile(int *array, int numberOfElements, char *destination) {
    ofstream g(destination);
    for (int i = 0; i < numberOfElements; ++i) {
        g<<array[i]<<" ";
    }
    g<<endl;
}

void sortArray(int *array, int numberOfElements) {

}
