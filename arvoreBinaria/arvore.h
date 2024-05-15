typedef struct no{
    int conteudo;
    struct no *esquerda, *direita;
}No;

typedef struct {
    No *raiz;
}ArvB;

void InserirEsquerda(No *, int);

void InserirDireita(No *, int);

void Inserir(ArvB *, int);

void Imprimir(No *);