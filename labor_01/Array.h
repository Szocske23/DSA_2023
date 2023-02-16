//
// Created by tivad on 2023. 02. 16..
//

#ifndef LABOR_01_ARRAY_H
#define LABOR_01_ARRAY_H

#include <iostream>
#include <fstream>

using namespace std;

int *initializeArray(int numberOfElements);
void readArray(int *&array, int & numberOfElements, char input[20]);
void printArray(int *array, int numberOfElements);
void printReverseArray(int *array, int numberOfElements);
void printArrayToFile(int *array, int numberOfElements, char destination[20]);
void sortArray(int *array, int numberOfElements);

#endif //LABOR_01_ARRAY_H
