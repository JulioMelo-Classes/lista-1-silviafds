#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
    
    int cont = 0, vetor[5], a;

    for(cont = 0; cont<SIZE; cont++){
        cin >> vetor[cont];
    }

    for(cont = 0; cont<5; cont++){
        if (vetor[cont] < 0)
        a = a + 1;
    }

    cout<<"\n "<<a<<"\n";
    return 0;
}
