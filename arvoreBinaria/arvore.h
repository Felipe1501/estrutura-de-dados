typedef struct no{
    int conteudo;
    struct no *esquerda, *direita;
}No;

typedef struct {
    No *raiz;
    int tamanho;
}ArvB;

// void InserirEsquerda(No *, int);

// void InserirDireita(No *, int);

// void Inserir(ArvB *, int);

No * InserirArvore(No *, int);

int tamanho(No *);

void Imprimir(No *);