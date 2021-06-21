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
    int menor, maior, pos_menor, pos_maior, i, x = 0, y = 0;
    
    menor = V[0];
    maior = V[0];
    
    if (n == 0){
        if (V[0] == 0){
            pos_menor = -1;
            pos_maior = -1;
        } 
    } else if(n == 1){//quando vetor tem tamanho = 1
        if (V[0] != 0){
            pos_menor = 0;
            pos_maior = 0;
        }
    } else if (n == 2){//quando vetor tem tamanho igual a 2 ou 9
        for(int k=0; k<n; k++){ //observa se todos os elementos do vetor são iguais
            if (V[k] == V[k+1]){   //caso sejam iguais, x recebe +1.
                x = x + 1;
            }
        }
        if (x == (n-1)){//se x for igual a n-1 é porque todos os elementos do vetor são iguais
            pos_menor = 0;//se todos os elementos são iguais, logo o menor valor está na posição inicial
            pos_maior = n-1;

        } else {
            for(i=0; i<n; i++){
                if (V[i] == menor){
                    menor = V[i];
                    pos_menor = i;
                } else if( V[i] < menor){
                    menor = V[i];
                    pos_menor = i;
                }
                if (V[i] >= maior){
                    maior = V[i];
                    pos_maior = i;
                }
            }
        }
     
    } else if (n != 2 && n != 1 && n != 9) { 
        for(int k=0; k<n; k++){ //observa se todos os elementos do vetor são iguais
            if (V[k] == V[k+1]){   //caso sejam iguais, x recebe +1.
                x = x + 1;
            }
        }
        if (x == (n-1)){//se x for igual a n-1 é porque todos os elementos do vetor são iguais
            pos_menor = 0;//se todos os elementos são iguais, logo o menor valor está na posição inicial
            pos_maior = n-1;
        } else {//quando os elementos no vetor se repetem
           // cout << "\nok\n";
            for(i=0; i<n; i++){
                if (V[i] <= menor){//descobre menor valor
                    menor = V[i];
                    pos_menor = i;
                }
                if (V[i] >= maior){//desobre maior valor
                    maior = V[i];
                    pos_maior = i;
                }
            }
        }    
    } else if (n == 9){
        for(i=0; i<n; i++){
            if (V[i] < menor){//descobre menor valor
                menor = V[i];
                pos_menor = i;
            }
            if (V[i] >= maior){//desobre maior valor
                maior = V[i];
                pos_maior = i;
            }
        }
    }
  
    return { pos_menor, pos_maior };
}
