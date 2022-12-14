#include <iostream>
#include <limits>
#include "funcoes.h"
using namespace std;


int main(){
    int lista[] = {500, 40, 30, 650, 14, 70, 90, 1313, 100, 1, 8000, 13};
    int tamanho = (sizeof(lista) / sizeof(lista[0]));
    int videos[] = {100, 350, 500, 550, 750, 948, 1460, 1520, 1600, 1767, 1842, 1945, 1999, 2000, 2500, 4500, 6540};
    int quantidade_videos = (sizeof(videos) / sizeof(videos[0]));
    int tamanho_pendrive = 8000;



    int n_fibonacci = 12; //Commit no vs code
    Fibonacci_top_down_auxiliar();
    //cout << "----------Fibonacci 2n----------" << endl;
    //cout << "Fibonacci: "<< Fibonacci_2n(n_fibonacci) << endl; //!valor max: 46
    //cout << "----------Fibonacci top down----------" << endl;
    //cout << "Fibonacci top down: "<< Fibonacci_top_down(n_fibonacci) << endl;
    //cout << "----------Fibonacci bottom up----------" << endl;
    //cout << "Fibonacci bottom up: "<< Fibonacci_bottom_up(n_fibonacci) << endl;
    //cout << "----------Fibonacci constante----------" << endl;
    //cout << "Fibonacci Constante: "<< Fibonacci_constante(n_fibonacci) << endl;
    cout << endl;



    //cout << "----------Lista Inicial----------" << endl;
    //Mostrar_Lista(lista, tamanho);
    //cout << endl;
    //cout << endl;
    //cout << "----------Passo a passo----------" << endl;
    //Ordenar_Divisao_Conquista(lista, 0, tamanho - 1);
    //Ordenar_Forca_Bruta(lista, tamanho);
    //Ordenar_williamsort(lista, 0, tamanho);
    //cout << endl;
    //cout << "----------Lista Final----------" << endl;
    //cout << endl;
    //Mostrar_Lista(lista, tamanho);
    //cout << endl;


    cavalo();


    //cout << "Numero de videos: "<< quantidade_videos << endl;
    //pendrive(videos, tamanho_pendrive);



    int elemento = 40;
    cout << endl;
    cout << endl;
    //cout << "Indice Forca Bruta: " << pesquisar_forca_bruta(lista, tamanho, elemento) << endl;
    //cout << "Indice Divisao e Conquista: " << pesquisar_divisao_conquista(lista, 0, tamanho-1, elemento) << endl;
    //cout << "indice tentativa e erro: " << pesquisar_tentativa_erro (lista, tamanho-1, elemento) << endl;

    return 0;
}
