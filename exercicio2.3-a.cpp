#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float numAleatorio1[15];
    float numAleatorio2[15];
    int tam = 15;
    
    srand(time(nullptr));
    for(int i=0; i < tam; i++) {
        numAleatorio1[i] = ((float)rand()/RAND_MAX)*10;
         cout << fixed << setprecision(2) << numAleatorio1[i] << " ";
    }
    
    
    return 0;
}