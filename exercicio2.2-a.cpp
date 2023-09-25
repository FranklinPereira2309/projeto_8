#include <iostream>
#include <iomanip>

//falta ajustar o valor aleatorio.
using namespace std;

int main() {
   float numAleatorio[250];
   srand(time(nullptr));

    // Gere números float entre 10 e 40 usando a expressão
    for (int i = 0; i < 250; ++i) {
        numAleatorio[i] = 10 + (rand() % 30);
        cout <<fixed << setprecision(1) << numAleatorio[i] << " ";
    }
    cout << endl;
    return 0;
}


