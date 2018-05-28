#include <stdlib.h>
#include <stdio.h>

struct no{
  int dado;
  struct no *prox;
};

typedef struct no Lista;

Lista* crialista(){
  return NULL;
}

Lista *insere(Lista *l,int x){
  Lista *novono = (Lista *) malloc(sizeof(Lista));
  novono->dado = x;
  novono->prox = l;
  return novono;
}

void retira(Lista *l, int x){
  int cont=0;
  Lista *aux;
  if(l == NULL){
    printf("Lista Vazia!\n");
  }
  else{
    for (aux=l;aux!=NULL;aux=aux->prox){
      if(aux->prox->dado == x && aux->prox!=NULL){
        aux->prox=aux->prox->prox;

        cont++;
      }
    }
    /*
    if(aux->prox!=NULL){
      l->prox = aux->prox;
      free(aux);
    }*/
    if(cont==0){
      printf("Valor não encontrado!\n");
    }
  }
}

void imprime(Lista *l){
  Lista *aux;
  for (aux=l;aux!=NULL;aux=aux->prox){
    printf("%d ",aux->dado);
  }
  printf("\n");
}
