#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float numAleatorio1[15];
    float numAleatorio2[15];
    float mediaAleatorio[15];
    int tam = 15;
    float media = 0;
    
    srand(time(nullptr));
    for(int i=0; i < tam; i++) {
        numAleatorio1[i] = ((float)rand()/RAND_MAX)*10; 
        cout << "Primeira nota " << i << " Aluno: " << fixed << setprecision(2) << numAleatorio1[i] << endl;
        
    }
    cout << "\n------------------------------------------\n";
    for(int i=0; i < tam; i++) {
        numAleatorio2[i] = ((float)rand()/RAND_MAX)*10;
        cout << "Segunda nota " << i << " Aluno: " << fixed << setprecision(2) << numAleatorio2[i] << endl;
    }

    for(int i=0; i < tam; i++) {
        media += (numAleatorio1[i] + numAleatorio2[i]) / 2;
        
        mediaAleatorio[i] = media;
        media = 0;
    }
    cout << "\n------------------------------------------\n";
    for(int i=0; i < tam; i++) {

        cout << "Media do " << i << " Aluno: " << mediaAleatorio[i] << endl;
    }
    
    
    return 0;
}