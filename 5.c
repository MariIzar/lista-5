#include <stdio.h>
int par (int n){
    return n*2;
}
double umSobreImpar (int n){
    int den;
    den=2*n+1;
    return 1.0/den;
}
double parSobreImpar (int n){
    double termo;
    termo= par(n) * umSobreImpar(n);
    return termo;
}
double somaParSobreImpar(int n){
    double soma;
    for (int i=1;i<n;i++){
        soma+=parSobreImpar(i);
    }
    return soma;
}
int main(){\
    int num;
    printf("Digite um valor para n:");
    scanf ("%d",&num);
    printf ("o %d-esimo termo eh: %2f\n", num, parSobreImpar(num));
    printf ("o a soma dos %d termo eh: %2f\n", num, somaParSobreImpar(num));
    return 0;
}