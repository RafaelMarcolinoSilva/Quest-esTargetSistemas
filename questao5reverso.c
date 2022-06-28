#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[15];
    char reverso[15];

    int tamanho = 0;

    printf("Entre com sua palavra:\n");
    gets(palavra);

    tamanho = strlen(palavra);

    for (int i = 0; i <= tamanho; i++){

        reverso[i] = palavra[tamanho-i];
        printf("%c", reverso[i]);
    }


}
