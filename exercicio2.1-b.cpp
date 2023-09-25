#include <iostream>

using namespace std;

int main() {
    int arr[20] = {};
    int arr2[20] = {};
    int valor;
    int frequencia;
    
for(int i = 0 ;  i < 20 ; i++) {
    arr[i] = 1 +rand() % 20;
}

for(int i = 0 ; i < 20 ; i++) {
    valor = arr[i];
    frequencia = arr2[valor -1]++;

    cout << "O numero:  " << valor << " Apareceu: " << frequencia +1 << " vez(es)"<< endl;
}

    

}
