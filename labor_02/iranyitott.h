//
// Created by tivad on 2023. 02. 22..
//

#ifndef LABOR_02_IRANYITOTT_H
#define LABOR_02_IRANYITOTT_H

using namespace std;

#include <iostream>
#include <fstream>
#include "iranyitatlan.h"
//#include "constants.h"
#define FILENAME "input.txt"
#include <vector>
#include <string>
//adjacency matrix
void readAdjacencyMatrixIranyitott(int **&matrix, int & numberOfRows, char *input);
///neighborhood list
vector<POINT> neighborhoodListFromFileIranyitott(char*input);

#endif //LABOR_02_IRANYITOTT_H
