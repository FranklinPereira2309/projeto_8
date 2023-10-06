#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>

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

    vector<string> strings;
   
    for (int i = 0; i < 10; i++) {
        string novaString = gerarString(10);
        novaString = pLetraMaiuscula(novaString);
        strings.push_back(novaString);
    }

    sort(strings.begin(), strings.end());
    int i = 1;
    for (const string& str : strings) {
        cout << i << " - String: " << str << endl;
        i++;
    }
  
    return 0;
}
