#include <stdio.h>

int somma(int a, int b){
    int c = 0;
    c = a + b;
    return c;
}



void fai_somma (){
   int a;
   int b;
   printf("\nInserisci primo numero: ");
   scanf("%d", &a);
   printf("\nInserisci secondo numero: ");
   scanf("%d", &b);
   printf("%d + %d = %d", a, b, somma(a, b));
}

int main(){
    fai_somma();
    return 0;
}