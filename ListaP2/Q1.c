#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char lixo[5];
typedef struct{
    char nome [50];
    int idade;
} Pessoa;
Pessoa p1;
int menu;
void limpar(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void cadastro(Pessoa *p1){
    printf("digite seu nome:");
    fgets(p1->nome, sizeof(p1->nome), stdin);
    limpar();
    printf("digite sua idade:");
    scanf("%d", &p1->idade);
    limpar();
}
void Nome(Pessoa *p1){
    printf("Seu nome é: %s", p1->nome);
}
void idade(Pessoa *p1){
    printf("Seu nome é: %i", p1->idade);
}
void exibir(Pessoa *p1){
    printf("Seu nome é: %s", p1->nome);
    printf("Seu nome é: %d", p1->idade);
}
void ano(Pessoa *p1){
    printf("Você nasceu no ano %d", 2026-p1->idade);
}
void saiu(Pessoa *p1){
    int i = sizeof(menu);
    printf("saindo %d", i);
    for(menu=0; menu<i;menu++){
        sleep(1);
        printf(".");
    }
}
void (*funcao[6])(Pessoa *p1)={cadastro, Nome, idade, exibir, ano, saiu};
int main(){
    printf("Bem vindo:\n");
    do{
            printf("|||||||Menu|||||||\n");
            printf("1. Cadastrar Pessoa\n");
            printf("2. Exibir Nome da Pessoa\n");
            printf("3. Exibir Idade da Pessoa\n");
            printf("4. Exibir Nome e Idade\n");
            printf("5. Exibir Ano de Nascimento\n");
            printf("6. Sair\n");
            scanf("%d", &menu);
            limpar();
            funcao[menu-1](&p1);
            system("clear");

    }while(menu!=6);{
printf("bye");
        }
    }
