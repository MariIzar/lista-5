#include <stdio.h>
double umSobreImpar(int n){
   int den;
   den= (2*n)+1;
   return 1.0/den;
}
double somaUmSobreImpar (int n){
    double soma=0.0;
    for (int i=1; i<n ;i++){
            soma += umSobreImpar(i);
    }
    return soma;
}
int main(){
    int num;
    printf("digite um valor para n: ");
    scanf("%d",&num);
    printf("a soma dos %d primeiros termos eh: %2f", num, somaUmSobreImpar(num));
    return 0;
}