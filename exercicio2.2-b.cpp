#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double numAleatorio[250];
    srand(time(nullptr));
    double tempMaxima;
    double tempMinima;

    // Gere números float entre 10 e 40 usando a expressão
    for (int i = 0; i < 250; ++i) {
        numAleatorio[i] = 1 + 30.0*(rand()%100)/3000.0;
        cout <<fixed << setprecision(2) << numAleatorio[i] << " ";
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


