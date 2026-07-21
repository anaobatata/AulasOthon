#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// não considerei a temperatura como valor real
// não considerei anos bissextos

int temp[365];
int i, maior =0,menor=0,soma=0,ndias=0;
float media;

int main(){
    srand(time(NULL));
    for (i=0; i<365;i++) {
        temp[i]=rand() % 46;//1. faltou incluir o () no srand, ele é uma função.  2. faltou a temperatura ir até o 45°
        if(temp[i]>maior){
            maior =temp[i];
        }
        if (temp[i]<menor) {
            menor= temp[i];
        }
        soma=soma+temp[i];
    }
    media=soma/365;
    for(i=0;i<365;i++){
        if(temp[i]<media){
            ndias++;
        }
    }
    printf("menor temperatura %d", menor); //botei o endereço das variaveis no printf, porém ele lê o valor delas
    printf("\nmaior temperatura %d", maior);
    printf("\nmedia %f", media);
    printf("\ndias menor que a media %d", ndias);//escrevi "&ndias++" ??????????
}
