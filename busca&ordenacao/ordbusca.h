#include <stdio.h>
#include <stdlib.h>

void insercaodireta(int v[], int n)
{
    int i; // passos do algoritmo
    int j; // índice do vetor
    int x; // valor a inserir
    for (i = 1; i < n; i++)
    {
        x = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > x)
        {
            v[j + 1] = v[j--];
        } // desloca o elemento anterior
          // para direita
        v[j + 1] = x;
    } // insere o elemento comparado na posição
    // correta
}

void selecaodireta(int v[], int n)
{
    int i;     // passos do algoritmo
    int j;     // índice do vetor
    int k;     // índice do menor elemento do vetor
    int menor; // menor elemento do vetor
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        menor = v[i];
        for (j = i + 1; j < n; j++)
        { // procura o menor elemento do
            // vetor
            if (v[j] < menor)
            {
                k = j;
                menor = v[j];
            }
        }
        v[k] = v[i];
        v[i] = menor;
    }
}