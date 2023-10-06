#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

string gerarString(int tamanho) {
    string resultado;
    for (int i = 0; i < tamanho; i++) {
        char caractereAleatorio = 'a' + rand() % ('z' - 'a' + 1);
        resultado += caractereAleatorio;
    }
    return resultado;
}

string pLetraMaiuscula(const string& str) {
    string resultado = str;
    if (!resultado.empty()) {
        resultado[0] = toupper(resultado[0]);
    }
    return resultado;
}

int main() {
    
    srand(time(nullptr));

    string string1 = gerarString(10);
    string string2 = gerarString(10);

    string1 = pLetraMaiuscula(string1);
    string2 = pLetraMaiuscula(string2);

    if (string1 < string2) {
        cout << string1 << endl;
        cout << string2 << endl;
    } else {
        cout << string2 << endl;
        cout << string1 << endl;
    }

    return 0;
}
