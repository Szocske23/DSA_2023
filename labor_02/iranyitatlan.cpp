//
// Created by tivad on 2023. 02. 20..
//

#include <iomanip>
#include "iranyitatlan.h"

vector <EDGE> edgeListFromFile(char *input) {
    ifstream f(input);
    if(!f) {
        cout<<"A fajl nem megnyithato!"<<endl;
        exit(1);
    }
    vector<EDGE> elLista;
    EDGE el; el.b=-1; el.e=-1;
    elLista.push_back(el);
    int nElek, nPontok;
    f>>nPontok>>nElek;
    for (int i = 0; i < nElek; ++i) {
        f>>el.b>>el.e;
        elLista.push_back(el);
    }
    return elLista;
}

void printEdgeList(vector <EDGE> Edges, const char *output) {
    ofstream o(output);
    for (int i = 0; i < Edges.size(); ++i) {
        o<<setw(3)<<i;
    }
    o<<endl;
    for (EDGE e:Edges) {
        o<<setw(3)<<e.b;
    }
    o<<endl;
    for(EDGE e:Edges) {
        o<<setw(3)<<e.e;
    }

}

int **initializeAdjacencyMatrix(int nPontok) {
    int **matrix = new int*[nPontok+1];
    for (int i = 0; i <= nPontok; ++i) {
        matrix[i] = new int[nPontok+1];
    }
    if(!matrix) {
        cout << "hiba";
        exit(1);
    }
    for (int i = 0; i <= nPontok; ++i) {
        for (int j = 0; j <= nPontok; ++j) {
            matrix[i][j]=0;
        }
    }
    return matrix;
}

void readAdjacencyMatrix(int **&matrix, int &nPontok, char *input) {
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
        matrix[el.e][el.b]=1;
    }
    f.close();
}

void printAdjacencyMatrix(int **matrix, int nPontok, char *output) {
    ofstream o(output);
    o<<"  ";
    for (int i = 1; i <= nPontok; ++i) {
        o<<i<<" ";
    }
    o<<endl;
    for (int i = 1; i <= nPontok; ++i) {
        o<<i<<" ";
        for (int j = 1; j <= nPontok; ++j) {
            o<<matrix[i][j]<<" ";
        }
        o<<endl;
    }
    o<<endl;
}

vector <POINT> neighborhoodListFromFile(char *input) {
    ifstream f(input);
    if(!f) {
        cout<<"A fajl nem megnyithato!"<<endl;
        exit(1);
    }
    POINT szomszedok;
    int nElek, nPontok, p1, p2;
    f>>nPontok>>nElek;
    vector<POINT> pontok(nPontok);
    for (int i = 0; i < nPontok; ++i) {
        f>>p1>>p2;
        pontok[p1-1].neighbors.push_back(p2);
        pontok[p2-1].neighbors.push_back(p1);
    }
    return pontok;
}

void printNeighborhoodList(vector <POINT> Points, char *output) {
    ifstream f(output);
    for (int i = 0; i < Points.size(); ++i) {
        cout<<i<<" ";
    }
}
