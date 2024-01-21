#include <iostream>

using namespace std;

void fillV(int v[]);
void printV(int v[], int *min, int *max);
int sommaV(int v[]);
void minMax(int v[], int *min, int *max);


int main() {

    int array[10];
    int min, max =0;

    fillV(array);
    cout << "[SUM: "<< sommaV(array)  << "]\n" << endl;
    minMax(array, &min, &max);
    printV(array, &min, &max);


    return 0;
}
                                                                                                                                                                                                                                
void fillV(int v[]) {
    for (int i = 0; i < sizeof(v) / sizeof(int); i++) {
        cout << i+1 << " --> ";
        cin >> v[i];
    }
    cout << "\n";
}

void printV(int v[], int *min, int *max) {
    for (int i = 0; i < sizeof(v) / sizeof(int); i++) {
        if (v[i] != *min && v[i] != *max) {
            cout << v[i] << endl;
        } else {
            if (v[i] == *min) {
                cout << v[i] << " <-- MIN" << endl;
            } else {
                cout << v[i] << " <-- MAX" << endl;
            }
        }
    }
}

int sommaV(int v[]) {
    int somma = 0;
    for (int i = 0; i < sizeof(v) / sizeof(int); i++) {
        somma += v[i];
    }
    return somma;
}

void minMax(int v[], int *min, int *max) {
    for (int i = 1; i < sizeof(v) / sizeof(int); i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}
