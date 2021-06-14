#include "function.h"
#include <iostream>

std::vector<unsigned int> fib_below_n( unsigned int n ){
    int t1 = 0, t2 = 1, t3 = 1;
    std::vector<unsigned int> v;
    while (t3 < n){
        v.push_back(t3);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    
    return v;
}

/*int main(){
    int tam, n;

    cout << "Digite um número inteiro: ";
    cin >> n;

    std::vector<unsigned int> v = fib_below_n(n);

    tam = v.size();
    cout << "{ ";
    for(int i=0; i<tam; i++){
        cout << v[i] << "\t" << endl;
    }
    cout << " }";

    return 0;
}*/
