#include <iostream>


using namespace std;

int main() {
    float numAleatorio[250];
    srand(time(nullptr));
    float tempMaxima;
    float tempMinima;

    // Gere números float entre 10 e 40 usando a expressão
    for (int i = 0; i < 250; ++i) {
        numAleatorio[i] = 10 + (rand() % 30);
        cout << numAleatorio[i] << " ";
    }
    cout << endl;
    tempMaxima = numAleatorio[0];
    tempMinima = numAleatorio[0];
    for(int i =1; i < 250 ; i++) {
        if(numAleatorio[i] > tempMaxima) {
            tempMaxima = numAleatorio[i];
        }else if(numAleatorio[i] < tempMinima) {
            tempMinima = numAleatorio[i];
        }
    }
    cout << "Temperatura Minima: " << tempMinima << " Temperatura maxima: " << tempMaxima << endl;

    
    return 0;
}


