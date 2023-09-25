#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float numAleatorio[250];
    srand(time(nullptr));
    float soma = 0;;
    float media = 0;

    // Gere números float entre 10 e 40 usando a expressão
    for (int i = 0; i < 250; ++i) {
        numAleatorio[i] = 1 + 30.0*(rand()%100)/3000.0;
        soma += numAleatorio[i];
        
    }
    
    media = soma /250;
    cout << fixed << setprecision(2) << "A media de temperatura foi: " << media << endl;

    
    return 0;
}


