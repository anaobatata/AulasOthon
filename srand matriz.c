#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Setando gerador randomico
    srand (time(NULL));

    // DECLARAÇÃO matriz
    int m[5][5];
    int i=0, j=0, soma=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            m[i][j] = rand() %100;
        }
    }
    /*    for(i=0;i<5;i++){
            for(j=0;j<3;j++)
            printf("%d \n" , m[i][j]);
        printf("\n");
    } */

        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
            soma += m[i][j];
            printf("%d " , m[i][j]);
            }
        printf("\t- 5d\n", soma);
        soma = 0;
    }
}