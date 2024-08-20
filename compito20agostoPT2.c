#include <stdio.h>

int main()
{
    int primo_numero;
    int secondo_numero;  
    float media;
    

    printf("Inserisci il primo numero\n");
    scanf("%d", &primo_numero);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &secondo_numero);

    media = (float)(primo_numero + secondo_numero)/2;
    
    printf("La media dei due numeri e': %f\n", media);

    return 0;

}