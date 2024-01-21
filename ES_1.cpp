#include <iostream>
#include <cstdbool>

using namespace std;

bool is_pari(int n) {
    if (n%2==0) {
        return false;
    } else {
        return true;
    }
}

int main () {
    cout << "CIAO" << endl;
    int len = 0;
    for (int i = 1; len < 100; i++) {
        if (is_pari(i)) {
            cout << i << " " << endl;
            len++;
        }
        
    }
}
