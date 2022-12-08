#include "funcoes.h"
#include <iostream>
using namespace std;



int pesquisar_forca_bruta(int *v, int n, int j){
        for (int i = 0; i <= n; i++){
                cout << "Procurando " << j << " na posicao " << i << endl;
                if (v[i] == j)
                    return i;
        }
    return -1;
}

int pesquisar_divisao_conquista (int *v, int i, int n, int j){
    //!pesquisa binaria, o vetor deve estar ordenado de forma decrescente antes!!

    while (i != n){
        int metade = (i+n)/2;
        //cout << "Metade = " << metade << endl;
        //cout << "indice i atual: " << i << endl;
        //cout << "indice n atual: " << n << endl;
        if (j == v[metade])
            return metade;
        if (j <= v[metade]){
            cout << "" << j << " esta localizado na segunda metade da lista" << endl;
            i = metade + 1;
        }
        else{
            n = metade;
            cout << "" << j << " esta localizado na primeira metade da lista" << endl;
        }
    }
    if (v[i] == j)
        return i;
    else
        return -1;
}


int pesquisar_tentativa_erro (int *v, int n, int j){
    cout << "Procurando " << j << " na posicao " << n << endl;
    if (n < 0 || v[n] == j)
        return n;
    else
        pesquisar_tentativa_erro(v, n-1, j);
}
