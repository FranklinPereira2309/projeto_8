#include <iostream>

using namespace std;

int main() {
    int arr[100] = {};
       
for(int i = 0 ;  i < 100 ; i++) {
    arr[i] = 1 +rand() % 20;
}

for(int i = 0 ; i < 100 ; i++) {
   cout << arr[i] << " ";

}

cout << endl;


    

}
