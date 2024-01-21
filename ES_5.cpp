#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int matrix[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = i*j;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << setw(2) << matrix[i][j];
        }
        cout << "\n";
    }


    return 0;
}
