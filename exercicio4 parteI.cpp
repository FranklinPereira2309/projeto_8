#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int larg = 640;
const int alt = 480;
const int intensidades = 256;

int main() {
    
    srand(time(nullptr));
    
    int imagem[alt][larg];
    for (int x = 0; x < alt; x++) {
        for (int y = 0; y < larg; y++) {
            imagem[x][y] = rand() % intensidades;
        }
    }
   
    int histograma[intensidades] = {0};
    for (int x = 0; x < alt; x++) {
        for (int y = 0; y < larg; y++) {
            int intensidade = imagem[x][y];
            histograma[intensidade]++;
        }
    }
    
    cout << "Histograma:" << endl;
    for (int i = 0; i < intensidades; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
