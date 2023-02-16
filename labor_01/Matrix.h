//
// Created by tivad on 2023. 02. 16..
//

#ifndef LABOR_01_MATRIX_H
#define LABOR_01_MATRIX_H

#include <fstream>
#include <iostream>

using namespace std;

int **initializeMatrix(int numberOfRows, int numberOfColumns);
void readMatrix(int **&matrix, int & numberOfRows, int &numberOfColumns, const char input[20]);
void printMatrix(int **matrix, int numberOfRows, int numberOfColumns);

#endif //LABOR_01_MATRIX_H
