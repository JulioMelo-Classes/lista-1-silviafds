#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 *@param V This is the array-to-pointer decay representing an array.
 *@param n  The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n ){
    int menor, maior, pos_menor, pos_maior;
    
    menor = V[0];
    maior = V[0];
    for(int i=0; i<n; n++){
        if(V[i] < menor) {
            menor = V[i];
            pos_menor = i;
        }
        if(V[i] >= maior) {
            maior = V[i];
            pos_maior = i;
        }
    }

    /*cout << "\nMenor num: " << menor << " Pos " << pos_menor << "\n";
    cout << "\nMaior num: " << maior << " Pos " << pos_maior << "\n";*/
    return { pos_menor, pos_maior };
}

/*int main(){
    int V[] = { 5, 4, 1, 3, 1, 10, 7, 10, 6, 8 };
    int tam = 10;
    std::pair<int,int> v, y = min_max(V, tam);

    return 0;
}*/
