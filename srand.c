#include <stdio.h>
#include <conio.h>

int main(){
    //Setando gerador randomico
    srand (time(NULL));

    // DECLARAÇÃO MATRIZ
    int m[3][3];
    int i=0, j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m[i][j] = rand() %100;
        }
    }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
            printf("%d", m[i][j]);
        }
    }
}