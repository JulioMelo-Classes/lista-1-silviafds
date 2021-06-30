#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
faltou inicializar "a" mas ok
*/
int main(void){
    
    int cont = 0, vetor[5], a = 0;

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
