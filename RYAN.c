#include <stdio.h>
#include <conio.h>


struct funcionario{
    char nome[50];
    float salario;

};

struct funcionario f1;


void menu(){
    printf("===== MENU =====\n1 - Cadastrar Funcionario\n2 - Exibir dados do funcionario\n3 - Aplicar aumento por valor\n4 - Aplicar aumento por referencia\n5 - Sair\nEscolha uma opcao: ");
}

int opcao(){
    int x;
    scanf("%d", &x);
    setbuf(stdin, NULL);
    return x;
}

void registro_nome(char nome[50]){
    printf("Qual o nome do funcionario? ");
    gets(nome);
}

float registro_salario(){
    float s;
    printf("Qual seu salario atual? ");
    scanf("%f", &s);
    setbuf(stdin, NULL);
    return s;
}
void invalido(){
    printf("Opcao invalida.\n");
}

void opcao1(){
    registro_nome(f1.nome);
    f1.salario = registro_salario();
}

void opcao2(){
    printf("O nome do funcionario e: %s\n", f1.nome);
    setbuf(stdin, NULL);
    printf("O seu salario atual e: %.2f\n", f1.salario);
}

float percentual(){
    float x;
    printf("Qual a porcentagem do aumento? ");
    scanf("%f", &x);
    return x;
}

void aumentarporvalor(float salario, float percentual){
    float valorfinal;
    valorfinal = salario * (1 + percentual/100.0);
    printf("O resultado do aumento por valor e: %.2f\n", valorfinal);

}

void opcao3(){
    aumentarporvalor(f1.salario, percentual());
}

void aumentarporreferencia(float *salario, float percentual){

    *salario = *salario * (1 + percentual/100.0);
    printf("O resultado do aumento por referencia e: %.2f\n", *salario);
}

void opcao4(){
    aumentarporreferencia(&f1.salario, percentual());
}

int main(){
    int x;
    menu();
    x = opcao();

    if (x != 1){
        printf("Funcionario nao registrado.");
        return 0;
    }

    while (x != 5)
    {
        switch (x)
        {
        case 1:
           opcao1();
           printf("\n--- Dados Atualizados ---\n");
           opcao2();
            break;
        case 2:
            printf("\n--- Dados Do Funcionario ---\n");
            opcao2();
            break;
        case 3:
            opcao3();
            printf("\n--- Dados Do Funcionario ---\n");
            opcao2();
            break;
        case 4:
            opcao4();
            printf("\n--- Dados Atualizados ---\n");
            opcao2();
            break;

        default:
            invalido();
            break;
        }
        menu();
        x = opcao();

    }


}
