#include "funcoes.h"
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int lista_fibonacci[50];
void Fibonacci_top_down_auxiliar(){
    int tamanho = (sizeof(lista_fibonacci) / sizeof(lista_fibonacci[0]));
    for (int x = 0; x<=tamanho; x++)
        lista_fibonacci[x] = -1;
}
int Fibonacci_top_down(int n){
        if (n <= 1)
            return n;

        if (lista_fibonacci[n] != -1)
            return lista_fibonacci[n];

        lista_fibonacci[n] = Fibonacci_top_down(n-1) + Fibonacci_top_down(n-2);
        cout << "Valor atual N: " << n << ", F: " << lista_fibonacci[n] << endl;
        return lista_fibonacci[n];
}

int Fibonacci_bottom_up(int n){
    if (n<=1)
        return n;
    int a = 0;
    int b = 1;
    for (int x = 2; x<= n; x++){
        int auxiliar = a+b;
        a = b;
        b = auxiliar;
        cout << "Valor atual N: " << x << ", F: " << b << endl;
    }
    return b;
}


int Fibonacci_constante(int n){
    return ((pow(1.61803398875,n)-pow(-0.61803398875,n))/sqrt(5));
}


int Fibonacci_2n(int n){
    int f = 0;
    if (n <= 1)
        return n;
    for (int x = 1; x <= 2; x++)
        f = f + Fibonacci_2n(n-x);
    cout << "Valor atual N: " << n << ", F: " << f << endl;
    return f;
}
