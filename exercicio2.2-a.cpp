#include <iostream>
#include <iomanip>

//falta ajustar o valor aleatorio.
using namespace std;

int main() {
   float numAleatorio[250];
   srand(time(nullptr));

    // Gere números float entre 10 e 40 usando a expressão
    for (int i = 0; i < 250; ++i) {
        numAleatorio[i] = 1 + 30.0*(rand()%100)/3000.0;
        cout <<fixed << setprecision(1) << numAleatorio[i] << " ";
    }
    cout << endl;
    return 0;
}


