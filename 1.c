#include <stdio.h>
int par (int n){
    return n*2;
}
int main(){
    int num;
    printf("Digite qual valor da sequencia: ");
    scanf ("%d", &num);
    par(num);
    printf("o termo da sequencia que voce quer eh: %d", par(num));
    return 0;
}