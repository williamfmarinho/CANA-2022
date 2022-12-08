#include "funcoes.h"
#include <iostream>
using namespace std;


void Ordenar_Forca_Bruta(int *v, int n){
    int proxIndice, auxiliar;

    for (int indice = 0; indice < n; indice++){
        int max = indice;
        for (proxIndice = indice+1; proxIndice < n; proxIndice++){
            if (v[proxIndice] > v[max]){
                max = proxIndice;
            }
        }
        cout << endl;
        //!cout << "Passo: " << indice+1 << ", Max: " << v[max]<< endl;
        auxiliar = v[indice];
        v[indice] = v[max];
        v[max] = auxiliar;
        for (int i = 0; i < n; i++){
            cout << v[i] << ", ";
        }
    }
    cout << endl;
}

void Divisao_Conquista(int *v, int const esquerda, int const meio, int const direita){
    //! Baseado no merge sort dos slides
    auto const tamanhoEsquerda = meio - esquerda + 1;
    auto const tamanhoDireita = direita - meio;

    //! Criar arrays temporarios
    auto *arrayEsquerdo = new int[tamanhoEsquerda],
         *arrayDireito = new int[tamanhoDireita];

    //! Preenchendo os arrays com os dados
    for (auto i = 0; i < tamanhoEsquerda; i++)
        arrayEsquerdo[i] = v[esquerda + i];
    for (auto j = 0; j < tamanhoDireita; j++)
        arrayDireito[j] = v[meio + 1 + j];

    //! Começando as comparações dos 2 arrays
    auto comecoEsquerda = 0; //! Indice inicial do array esquerdo
    auto comecoDireita = 0; //! Indice inicial do array direito
    int indiceCombinado = esquerda; //! Indice inicial do array combinado

    while (comecoEsquerda < tamanhoEsquerda && comecoDireita < tamanhoDireita) {
        if (arrayEsquerdo[comecoEsquerda] >= arrayDireito[comecoDireita]) {
            v[indiceCombinado] = arrayEsquerdo[comecoEsquerda];
            comecoEsquerda++;
        }
        else {
            v[indiceCombinado] = arrayDireito[comecoDireita];
            comecoDireita++;
        }
        indiceCombinado++;
    }

    //! Copia o resto do array esquerdo pro principal
    while (comecoEsquerda < tamanhoEsquerda) {
        v[indiceCombinado] = arrayEsquerdo[comecoEsquerda];
        comecoEsquerda++;
        indiceCombinado++;
    }

    //! Copia o resto do array direito pro principal
    while (comecoDireita < tamanhoDireita) {
        v[indiceCombinado]
            = arrayDireito[comecoDireita];
        comecoDireita++;
        indiceCombinado++;
    }
    delete[] arrayEsquerdo;
    delete[] arrayDireito;
}

void Ordenar_Divisao_Conquista(int *v, int const comeco, int const fim){
    //! "Comeco" eh pro array esquerdo e "fim" eh pro direito
    if (comeco >= fim)
        return; // Retorna de forma recursiva

    int meio = comeco + (fim - comeco) / 2;
    cout << "\n[Array 1]                           [Array 2]" << endl;
    for (int indice = comeco; indice <= meio; indice++)
        cout << " ," << v[indice];
    cout << ".................................";
    for (int indice = meio + 1; indice <= fim; indice++)
        cout << " ," << v[indice];
    Ordenar_Divisao_Conquista(v, comeco, meio);
    cout << endl;
    Ordenar_Divisao_Conquista(v, meio + 1, fim);
    Divisao_Conquista(v, comeco, meio, fim);
}

void Ordenar_williamsort(int *v, int indice, int n){
    //!Verificando se chegou no começo recursivamente, se sim então adiciona um pra continuar do 0
    if (indice < 0)
        indice++;
    cout << endl;
    //!Mostra a lista de números atuais
    for (int i = 0; i < n; i++)
            cout << v[i] << ", ";
    cout << "Indice atual: " << indice << endl;
    //!Condição de saida recursiva, quando chegar no fim da fila
    if (indice>=n)
        return;
    int proximo = indice + 1;
    //!int maior_valor = indice;
    //!Verifica se o valor atual é menor que o proximo, se for, troca e chama recursivo pro anterior
        if (v[indice] < v[proximo]){
            //!maior_valor = proximo;
            int auxiliar = v[indice];
            v[indice] = v[proximo];
            v[proximo] = auxiliar;
            Ordenar_williamsort(v, indice-1, n);
        }
    //!Se não, só chama pro proximo
        else
            Ordenar_williamsort(v, proximo, n);
}

void Mostrar_Lista(int *v, int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << ", ";
    }
}

