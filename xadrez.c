#include <stdio.h>


int main(){
    int bispo;
    do{
        printf("Digite o número de casas que o bispo pode mover (1-5): \n");
        scanf("%d", &bispo);
    } while (bispo < 1 || bispo > 5);
    
    printf("O bispo pode se mover até %d casas.\n", bispo);

    printf("Cima,Direita\n");


    return 0;
}