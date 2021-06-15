/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void ){
    int m, n, aux, a, resultado[10], x = 0;

    while(cin >> std::ws >> m >> n){ //vai ler enquanto houverem números
        aux = m;
            if (n > 0){
                for(int i = 1; i<n; i++){
                    aux = aux + 1;
                    m = m + aux;
                    resultado[x] = m;
                }
            } else if (n < 0){
                a = n * -1; //transforma o número negativo em positivo
                for(int i = 1; i<a; i++){
                    aux = aux - 1;
                    m = m + aux;
                    resultado[x] = m;
                }
            } else {
                resultado[x] = m;
            }
            
        x = x+1;
    }

    for(int u=0; u<x; u++){
        cout << resultado[u] << "\n";
    }

    return 0;
}
