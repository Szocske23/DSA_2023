//
// Created by tivad on 2023. 02. 22..
//

#include <iomanip>
#include "iranyitott.h"
#include "iranyitatlan.h"

void readAdjacencyMatrixIranyitott(int **&matrix, int &nPontok, char *input) {
    ifstream f(input);
    if(!f) {
        cout<<"A fajl nem megnyithato!"<<endl;
        exit(1);
    }
    int nElek;
    EDGE el;
    f>>nPontok>>nElek;
    matrix = initializeAdjacencyMatrix(nPontok);
    for (int i = 1; i <= nElek; ++i) {
        f>>el.b>>el.e;
        matrix[el.b][el.e]=1;
    }
    f.close();
}

vector <POINT> neighborhoodListFromFileIranyitott(char *input) {
    ifstream f(input);
    if(!f) {
        cout<<"A fajl nem megnyithato!"<<endl;
        exit(1);
    }
    POINT szomszedok;
    vector<POINT> pontok;
    int nElek, nPontok, p1, p2;
    f>>nPontok>>nElek;
    for (int i = 0; i < nPontok; ++i) {
        f>>p1>>p2;
        cout<<p1<<" "<<p2<<endl;
        pontok[p1-1].neighbors.push_back(p2-1);
    }
    return pontok;
}
