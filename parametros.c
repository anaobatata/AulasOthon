#include <stdio.h>

float taxa;
struct Funcionario{
    char nome[50];
    float salario;
};
struct Funcionario f1;
int limpadordebuf;
void cadastro(char nome[50], float *salario){
    printf("Insira o nome do funcinário: ");
    limpadordebuf = getchar();//após o digitar 1 e apertar enter, fica um \n no buff, não consegui sem usar este comando
    fgets(nome, 50, stdin);
    printf("\nInsira o salário do funcinário: ");
    scanf ("%f", &*salario);
}
void exiba(char nome[50], float salario){
    printf("\nNome: %s", nome);
    printf("\nSalario: %.2f\n", salario);
}
void upvalor(float salario, float taxa){
    printf("Insira a porcentagem do aumento(Ex: 100 para um aumento de 100 p/cento): ");
    scanf ("%f",&taxa);
    salario = salario* (1+(taxa/100));
    printf("\nSeu salário seria: %.2f", salario);
}
void upreferencia( float *salario,  float taxa){
    printf("Insira a porcentagem do aumento(Ex: 100 para um aumento de 100 p/cento): ");
    scanf ("%f",&taxa);
    *salario = *salario* (1+(taxa/100));
    printf("\nSeu salário agora é: %.2f", *salario);
}

int main(){
    int opcao;
    do {
        printf("\n--MENU--\n1-Cadastrar funcionário");
        printf("\n2-Exibir dados do funcionário");
        printf("\n3-Aplicar aumento por valor");
        printf("\n4-Aplicar aumento por referência");
        printf("\n5-Sair\n");

        scanf("%i",&opcao);

    switch (opcao){
            case 1:
                cadastro(f1.nome, &f1.salario);
                break;
            case 2:
                exiba(f1.nome,f1.salario);
                break;
            case 3:
                upvalor(f1.salario, taxa);
                break;
            case 4:
                upreferencia(&f1.salario, taxa);
                break;
            case 5:
                printf("\nTchau\n");
                break;
            default:
                printf("\nValor Invalido!!\n");
                }
        }while(opcao !=5);

            }
