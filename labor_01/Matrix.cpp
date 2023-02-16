//
// Created by tivad on 2023. 02. 16..
//

#include "Matrix.h"

int **initializeMatrix(int numberOfRows, int numberOfColumns) {
    int **matrix = new int*[numberOfRows];
    for (int i = 0; i < numberOfRows; ++i) {
        matrix[i] = new int[numberOfColumns];
    }
    return matrix;
}

void readMatrix(int **&matrix, int &numberOfRows, int &numberOfColumns, const char *input) {
    ifstream f(input);
    if(!f) {
        cout<<"A fájl nem megnyitható!"<<endl;
        exit(1);
    }
    f>>numberOfRows>>numberOfColumns;
    cout<<numberOfRows<<" "<<numberOfColumns<<endl;
    matrix = initializeMatrix(numberOfRows,numberOfColumns);
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            f>>matrix[i][j];
        }
    }
    f.close();
}

void printMatrix(int **matrix, int numberOfRows, int numberOfColumns) {
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
