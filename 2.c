#include <stdio.h>
int par (int n){
    return n*2;
}
void mostrarParesEmOrdemDecrescente(int n){
    int termo;
    for(int i=n; i>0; i--){
        termo = par(i);
        if (termo<n){
            printf ("%d ",termo);
        }
    }
    return;
}

int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("os termos pares decrescente sao: \n");
    mostrarParesEmOrdemDecrescente(n);
    return 0;
}