#include "funcoes.h"
#include <iostream>
using namespace std;


void pendrive (int *videos, int armazenamento){

    int n = 17;
    cout << "Numero de videos: "<< n << endl;
    int videos_adicionados = 0;
    cout << "--------------Videos disponiveis--------------" << endl;
    for (int x = 0; x < n; x++)
        cout << " ,"<< videos[x];
    cout << endl;
    cout << endl;
    for (int i = 0; i <n; i++){
        if (videos[i] != 0 && videos[i] >=400 && videos[i] <= 2000 && videos[i] <= armazenamento){
            armazenamento = armazenamento - videos[i];
            cout << "Adicionou o video de tamanho " << videos[i] << "mb para o pendrive. Restante: " << armazenamento <<"mb" << endl;
            videos[i] = 0;
            videos_adicionados++;
        }
    }
    cout << endl;
    cout << endl;
    cout << "--------------Videos restantes--------------" << endl;
    for (int x = 0; x < n; x++)
        cout << " ,"<< videos[x];

    cout << endl;
    cout << endl;
    cout << "Armazenamento restante: " << armazenamento << "mb"<< endl;
    cout << "Videos Adicionados: " << videos_adicionados << endl;
}
