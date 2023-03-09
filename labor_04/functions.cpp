//
// Created by tivad on 2023. 03. 06..
//

#include "functions.h"

int max(int *arr, int start, int end) {
    if (start == end) {
        return arr[start];
    } else {
        int mid = (start + end) / 2;
        int left_max = max(arr, start, mid);
        int right_max = max(arr, mid + 1, end);
        return (left_max > right_max ? left_max : right_max);
    }
}

int sum(int *arr, int start, int end) {
    if (start == end) {
        return arr[start];
    } else {
        int mid = (start + end) / 2;
        int left_sum = sum(arr, start, mid);
        int right_sum = sum(arr, mid + 1, end);
        return left_sum + right_sum;
    }
}

int binary_search(int *arr, int start, int end, int x) {
    if (start > end) {
        return -1; // az elem nem található a tömbben
    } else {
        int mid = (start + end) / 2;
        if (arr[mid] == x) {
            return mid; // az elem megtalálva
        } else if (arr[mid] > x) {
            return binary_search(arr, start, mid - 1, x); // bal oldali résztömb keresése
        } else {
            return binary_search(arr, mid + 1, end, x); // jobb oldali résztömb keresése
        }
    }
}

void hanoi(int n, char source, char dest, char aux) {
    if (n == 1) {
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
    } else {
        hanoi(n-1, source, aux, dest);
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
        hanoi(n-1, aux, source, dest);
    }
}

// Két L és R tömb összefésülése az arr tömbbe
void merge(int *arr, int l, int m, int r) {
    int i, j, k;

    // L és R tömb létrehozása, L az elejétől a közepéig, R a közepétől a végéig
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    // Al és főtömbök indexének fenntartása
    i = 0;
    j = 0;
    k = l;

    // Amíg el nem érjük az L vagy a R tömb végét, addig a fő tömbbe
    // elmentjük a kettő közül a nagyobbik elemet
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Ha az elemek vagy az L vagy az R tömbből elfogytak,
    // Vesszük az adott tömbből a maradékot, és betesszük a fő tömbbe
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int *arr, int l, int r) {
    if (l < r) {
        // Az m pontnál osztjuk két részre az adott tömböt
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // A rendezett altömbök összefésülése
        merge(arr, l, m, r);
    }
}

void quickSort(int *array, int low, int high) {
    if (low < high) {
        // Megkeressük a döntőpontot
        // A döntőpontnál kisebb elemek a bal oldalon lesznek
        // A döntőpontnál nagyobb elemek a jobb oldalon lesznek
        int pi = partition(array, low, high);

        // Rekurzív meghívás a döntőpont baloldalán
        quickSort(array, low, pi - 1);

        // Rekzurzív meghívás a döntőpont jobboldalán
        quickSort(array, pi + 1, high);
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *array, int low, int high) {
    // A jobb szélső elemet kiválasszuk főelemként
    int pivot = array[high];

    // Pointer létrehozása a nagyobb elemhez
    int i = (low - 1);

    // Bejárjuk a tömb minden elemét, összehasonlítjuk a főelemmel
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {

            // Ha egy kisebb elemet találunk a főelemnél
            // Akkor felcseréljük az i-vel
            i++;

            // Felcseréljük az i-n levő elemet a j-n levő elemmel
            swap(&array[i], &array[j]);
        }
    }

    // Felcseréljük a főelemet az i-nél nagyobb elemmel
    swap(&array[i + 1], &array[high]);

    // Visszatérítjük a particiós pontot
    return (i + 1);
}
