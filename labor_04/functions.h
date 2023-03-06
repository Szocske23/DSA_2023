//
// Created by tivad on 2023. 03. 06..
//

#ifndef LABOR_04_FUNCTIONS_H
#define LABOR_04_FUNCTIONS_H

int max(int arr[], int start, int end);
int sum(int arr[], int start, int end);
int binary_search(int arr[], int start, int end, int x);
void hanoi(int n, char source, char dest, char aux);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void quickSort(int array[], int low, int high);
int partition(int array[], int low, int high);

#endif //LABOR_04_FUNCTIONS_H
