#define MAX 100
#define TRUE 1
#define FALSE 0

typedef struct {
    int comeco, final;
    int itens[MAX];
}Fila;

void Init(Fila *);

int IsEmpty(Fila);

int IsFull(Fila);

void Inserir(Fila *, int);

int Remover(Fila *);