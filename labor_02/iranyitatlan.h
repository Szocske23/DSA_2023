//
// Created by tivad on 2023. 02. 20..
//

#ifndef LABOR_02_IRANYITATLAN_H
#define LABOR_02_IRANYITATLAN_H

using namespace std;
#include <iostream>
#include <fstream>
//#include "constants.h"
#define FILENAME "input.txt"
#include <vector>
#include <string>
typedef struct POINT {
    vector<int> neighbors;
} POINT;
typedef struct EDGE{
    int b,e;
}EDGE;
//edgelist
vector<EDGE> edgeListFromFile(char*input);
void printEdgeList(vector<EDGE> Edges,const char *output);
//adjacency matrix
int **initializeAdjacencyMatrix(int numberOfRows);
void readAdjacencyMatrix(int **&matrix, int & numberOfRows, char *input);
void printAdjacencyMatrix(int **matrix, int numberOfRows,char *output);
///neighborhood list
vector<POINT> neighborhoodListFromFile(char*input);
///print neighborhood list
void printNeighborhoodList(vector<POINT> Points,char*output);

#endif //LABOR_02_IRANYITATLAN_H
