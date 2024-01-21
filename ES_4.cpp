#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int array[10];
    int sum =0;

    for (int i= 0; i < sizeof(array) / sizeof(int); i++) {
        array[i] = rand()%10 +1;
        sum += array[i];
        cout << "NUM[" << i+1 << "] --> " <<  array[i] << endl;
    }

    cout << "\nSUM: " << sum << "\n" << endl;

    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(array) / sizeof(int); j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    cout << "Vettore Ordinato: " << endl;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        cout << "NUM[" << i+1 << "] --> " <<  array[i] << endl;
    } 

    return 0;
}
