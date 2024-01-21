#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int vocali(string frase);
void contrario(string *frase);
bool isPalindrome(string& frase);

int main() {
    string frase;
    cout << "Scrivi la frase: ";
    getline (cin, frase);
    cout << "Hai scritto: " << frase << endl;
    cout << "la frase contiene " << vocali(frase) << " vocali" << endl;
    contrario(&frase);
    cout << "INVERSED: " << frase << endl;

    if (isPalindrome(frase)) {
        cout << frase << " è palindroma." << endl;
    } else {
        cout << frase << " non è palindroma." << endl;
    }

    return 0;
}

int vocali(string frase) {
    int x =0;
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i =0; i < frase.length(); i++)  {
        for (int j = 0; j < sizeof(v) / sizeof(char); j++)  {
            x+= (frase[i] == v[j]) ? 1 : 0;
        }
    }
    return x;
}

void contrario(string *frase) {
    char temp;
    for (int i = 0; i < frase->length() / 2; i++) {
        temp = (*frase)[i];
        (*frase)[i] = (*frase)[frase->length() - i -1];
        (*frase)[frase->length() - i -1] = temp;
    }
}

bool isPalindrome(string& frase) {
    string reversed = frase;
    reverse(reversed.begin(), reversed.end());
    return frase == reversed;
}
