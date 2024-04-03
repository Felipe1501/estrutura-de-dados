#include "lista.h"

void IniciarLista(Lista *L){
    L->N = 0;
}

int IsFullLista(Lista L){
    return(L.N >= MAX);
}

int IsEmptyLista(Lista L){
    return(L.N == 0);
}

int AlterarLista(Lista *L, tipoLista x, int k){
    if(k < 0 || k >= L->N) return 0;
    L->itens[k] = x;
    return 1;
}

int ConsultarLista(Lista L, tipoLista *x, int k){
    if(k < 0 || k >= L.N) return 0;
    *x = L.itens[k];
    return 1;
}

int InserirLista(Lista *L, tipoLista x, int k){
    if(IsFullLista(*L) || k < 0 || k > L->N) return 0;
    int i;
    for(i = L->N-1;i >= k; i--) L->itens[i+1] = L->itens[i];
    L->itens[k] = x;
    L->N++;
    return 1;
}

int RemoverLista(Lista *L, int k){
    if(IsEmptyLista(*L) || k < 0 || k >= L->N) return 0;
    int i;
    // *x = L->itens[k];
    for(i = k; i < L->N-1;i++) L->itens[i] = L->itens[i+1];
    L->N--;
    return 1;
}

int ConcatenarLista(Lista *MARVEL, Lista DC){
    if(MARVEL->N + DC.N > 10){
        return 0;
    }else{

    int i;
    int LastIndex = MARVEL->N;
    for(i = 0; i < DC.N; i++){
        MARVEL->itens[LastIndex + i] = DC.itens[i];
        MARVEL->N++;
    }

    if(LastIndex + DC.N == MARVEL->N){
        return 1;
    }else{
        return 0;
    }
}
    }

int ContarLista(Lista L){
    return L.N;
}

int LocalizarLista(Lista L, int x){
    int i;
    for(i=0; i < L.N; i++){
        if(L.itens[i] == x){
            return i;
        }
    }
    return -1;
}

void ImprimirLista(Lista L){
    int i;
    for(i=0; i < L.N; i++){
        printf("%d\n", L.itens[i]);
    }
}

int InserirEmOrdemLista(Lista *L, tipoLista x){
    if(IsFullLista(L)) return 0;

    L->itens[L->N] = x;
    L->N;

    int i, j;
    for (i = 0; i < L->N; i++)
    {
        for (j = i; j < L->N; j++)
        {
            if (L->itens[i] > L->itens[j])
            {
                int temp = L->itens[i];
                L->itens[i] = L->itens[j];
                L->itens[j] = temp;
            }
        }
    }

    return 1;
}
