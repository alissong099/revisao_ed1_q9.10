#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define fmt "%d"

struct no {
    Item item;
    struct no *prox;
};
typedef struct no *Fila;

static struct no *no(Item x, struct no *sucessor) {
    struct no *p = malloc(sizeof(struct no));
    if (!p) {
        printf("Memoria insuficiente!\n");
        exit(1);
    }
    p->item = x;
    p->prox = sucessor;
    return p;
}

int vaziaf(Fila F) {
    return (F == NULL);
}

void enfileira(Item x, Fila *F) {
    if (*F == NULL) {
        *F = no(x, NULL);
        (*F)->prox = *F;
        return;
    }
    struct no *novo = no(x, (*F)->prox);
    (*F)->prox = novo;
    *F = novo;
}

Item desenfileira(Fila *F) {
    if (*F == NULL) {
        printf("Fila vazia!\n");
        exit(1);
    }
    struct no *primeiro = (*F)->prox;
    Item valor = primeiro->item;
    
    if (primeiro == *F) {
        free(primeiro);
        *F = NULL;
        return valor;
    }
    
    (*F)->prox = primeiro->prox;
    free(primeiro);
    return valor;
}

void exibe(Fila F) {
    if (vaziaf(F)) {
        printf("Fila vazia\n");
        return;
    }
    struct no *p = F->prox;
    do {
        printf(fmt " ", p->item);
        p = p->prox;
    } while (p != F->prox);
    printf("\n");
}

void destroif(Fila *F) {
    while (!vaziaf(*F))
        desenfileira(F);
}

int main() {
    Fila F = NULL;
    
    printf("=== Teste de Fila ===\n");
    printf("Inserindo 10, 20, 30\n");
    enfileira(10, &F);
    enfileira(20, &F);
    enfileira(30, &F);
    printf("Fila: "); exibe(F);
    
    printf("Saiu: %d\n", desenfileira(&F));
    printf("Fila: "); exibe(F);
    
    enfileira(40, &F);
    printf("Inserindo 40\nFila: "); exibe(F);
    
    printf("\nEsvaziando:\n");
    while (!vaziaf(F))
printf("Saiu: %d\n", desenfileira(&F));
    
    destroif(&F);
    return 0;
}
