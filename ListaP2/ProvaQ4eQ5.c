#include <stdio.h>
struct data{
    int dia;
    int mes;
    int ano;
};

void VerificarData(struct data D1){ //esqueci de especificar que é struct
    if(D1.ano<0){
        printf("data invalida");
    }else if(D1.mes> 12 | D1.mes<=0){   //errei o operador lógico
        printf("data invalida");
    }else if(D1.dia>30 | D1.dia<=0){    //errei o operador lógico
        printf("data invalida");
    }else{
        printf("data valida");
    }
}
struct data fimEvento (struct data inicio, int duracao) {
    struct data fim;
    int a=0,m=0,d=0;    //faltou inicializar as variaveis
    if(duracao>=365){
        a=duracao/365;
        duracao=duracao -a*365; //faltou ;
    }
    if(duracao>=30){
        m=duracao/30;
        duracao=duracao -m*30;  //faltou ;
    }
    d=duracao;
    fim.dia=inicio.dia+d;
    if (fim.dia>30){
        fim.dia=fim.dia-30;
        m++;
    }
    fim.mes=inicio.mes+m;
    if (fim.mes>12){
        fim.mes=fim.mes-12;
        a++;
    }
    fim.ano=inicio.ano+a;
    printf("\n%d/%d/%d",fim.dia, fim.mes, fim.ano); //faltou o printf ou return
    }

int main(){
    struct data d2={12, 11, 2026};
    VerificarData(d2);
    printf("\n%d/%d/%d",d2.dia, d2.mes, d2.ano);
    fimEvento(d2, 2026);

}
