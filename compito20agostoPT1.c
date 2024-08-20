#include <stdio.h>

int main()
{
    int primo_numero;
    int secondo_numero;
    int moltiplicazione;

    printf("Inserisci il primo numero\n");
    scanf("%d", &primo_numero);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &secondo_numero);

    moltiplicazione = primo_numero * secondo_numero;

    printf("La moltiplicazione dei due numeri e': %d\n", moltiplicazione);

    return 0;

}