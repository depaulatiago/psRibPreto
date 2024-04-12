 /*Escreva um programa que inverta os caracteres de um string.*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Digite uma string: ";
    getline(cin, s);

    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i];
    }

    cout << endl;

    return 0;
}