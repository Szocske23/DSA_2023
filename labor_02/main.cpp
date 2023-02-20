#include <iostream>
#include <vector>
#include "function.h"

using namespace std;

int main() {
    int nPontok, **matrix;
    //vector<EDGE> ellista1 = edgeListFromFile("be.txt");
    //printEdgeList(ellista1,"kiellista.txt");
    //readAdjacencyMatrix(matrix,nPontok,"be.txt");
    //printAdjacencyMatrix(matrix,nPontok,"kiszomszmatr.txt");
    vector<POINT> szomszlista1 = neighborhoodListFromFile("be.txt");
    printNeighborhoodList(szomszlista1,"szomszlista.txt");
    return 0;
}
