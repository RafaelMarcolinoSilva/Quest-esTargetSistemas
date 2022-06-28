#include <stdio.h>

int main (void)
{
 int seq = 0, anterior = 0, atual = 0,cont = 0, usuario = 0;
    int elemento = 25;

    printf("Entre com o numero para saber se pertence a sequencia de Fibonacci: ");
    scanf("%d", &usuario);

    for (int i = 0; i<elemento; i ++){
        if ((seq == 0) && (atual == 0)){
            seq = anterior + atual;
            atual = 1;
            anterior = 0;
            if (seq == usuario){
                cont ++;
            }
        }

        else if (anterior == 0){
            seq = anterior + atual;
            anterior  = atual;
            atual  = seq;
            if (seq == usuario){
                cont ++;
            }
        }

        else{
            seq = anterior + atual;
            anterior  = atual;
            atual  = seq;
            if (seq == usuario){
                cont ++;
            }
        }
        printf("%d ", seq);

    }

    if (cont == 0){
        printf("O numero nao pertence a sequencia");
      }

      else{
        printf("O numero pertence a sequencia");
      }

}
