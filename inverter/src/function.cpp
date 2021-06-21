#include <iostream>
#include <array>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > &arr ){
    size_t tam_arr = arr . size ();


    if(tam_arr > 1){
        for(int i = 0; i<tam_arr; i++){
            swap(arr[i], arr[tam_arr-1]);
            tam_arr = tam_arr - 1;
        }
    } else {
        for(int i = 0; i<tam_arr; i++){
            swap(arr[i], arr[i]);
        }
    }
    
    

}
