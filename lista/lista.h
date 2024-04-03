#define MAX 10 // numero máximo de elementos na lista
typedef int tipoLista; // tipo dos elementos da lista
typedef struct{
int N; // indicador de final da lista
tipoLista itens[MAX]; // elementos da lista
} Lista;

void IniciarLista(Lista *);

int IsFullLista(Lista);

int IsEmptyLista(Lista);

int AlterarLista(Lista *, tipoLista , int);

int ConsultarLista(Lista, tipoLista *, int);

int InserirLista(Lista *, tipoLista, int);

int RemoverLista(Lista *, int);

int ConcatenarLista(Lista *, Lista);

int ContarLista(Lista);

int LocalizarLista(Lista, int);

void ImprimirLista(Lista);

int InserirEmOrdemLista(Lista *, tipoLista);