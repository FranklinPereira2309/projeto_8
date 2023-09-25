#include <iostream>
#include <vector>

using namespace std;

int main() {
    int aleatorio[20];
    int numMaisFrequente;
    
    srand(time(nullptr));
    
    for(int i = 0 ;  i < 20; i++) {
        aleatorio[i] = 1 +rand() % 20;
        cout << aleatorio[i] << " ";
    }
    
    numMaisFrequente = aleatorio[0];
    int maximaFrequencia = 1;

      
    cout << endl;
    for(size_t i=0 ; i < 20 ; i++) {
        int contador = 1;

        for(size_t j= i+1; j < 20; ++j ) {

            if(aleatorio[i] == aleatorio[j]) {
                contador++;        
                
            }
        }
        if(contador > maximaFrequencia) {
            maximaFrequencia = contador;
            numMaisFrequente = aleatorio[i];
        }
        
    }
    
    
    cout << "O número mais frequente foi: " << numMaisFrequente << endl;

    return 0;
    
   
}


