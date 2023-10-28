#include <iostream>
using namespace std;

long int SumaCuadradoDigitos(int n){
    long int suma = 0;
    int digito;
    while (n > 0){
        digito = n%10;
        suma = suma + digito*digito;
        n = n/10;
    }
    return suma;
}

int main(){
    long int a, b, n;
    int cuenta = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        n = SumaCuadradoDigitos(i);
        while (n > 9){
            n = SumaCuadradoDigitos(n);
        }
        if (n == 1){
            cout << i << ' ';
            cuenta++;
        }
    }
    return 0;
}
