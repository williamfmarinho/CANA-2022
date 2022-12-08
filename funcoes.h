#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#endif // FUNCOES_H_INCLUDED

void Mostrar_Lista(int *v, int n);

void Fibonacci_top_down_auxiliar();
int Fibonacci_top_down(int n);
int Fibonacci_bottom_up(int n);
int Fibonacci_2n(int n);
int Fibonacci_constante(int n);

void Ordenar_Forca_Bruta(int *v, int n);
void Divisao_Conquista(int *v, int const esquerda, int const meio, int const direita);
void Ordenar_Divisao_Conquista(int *v, int const comeco, int const fim);
void Ordenar_williamsort(int *v, int indice, int n);

int cavalo();
int cavalgar(int x, int y, int passos, int tabuleiro[8][8], int movimento_x[8], int movimento_y[8]);
void Mostrar_Tabuleiro(int tabuleiro[8][8]);
void Mostrar_Tabuleiro(int x, int y, int tabuleiro[8][8]);
int Posicao_Valida(int x, int y, int tabuleiro[8][8]);
void limpar_tela();

extern int quantidade_videos;
void pendrive(int *videos, int armazenamento);


int pesquisar_forca_bruta(int *v, int n, int j);
int pesquisar_divisao_conquista (int *v, int i, int n, int j);
int pesquisar_tentativa_erro (int *v, int n, int j);

