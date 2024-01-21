#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int array[100];

    for (int i= 0; i < sizeof(array) / sizeof(int); i++) {
        array[i] = rand()%100 +1;
        cout << " - " <<  array[i];
    }
    cout << "\n\n";

    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(array) / sizeof(int); j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    cout << "Vettore Ordinato: " << endl;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        cout << " - " <<  array[i];
    } 
    cout << "\n";

    return 0;
}
