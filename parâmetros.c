#include <stdio.h>
float taxa;
struct Funcionario{
    char nome[50];
    float salario;
};
void cadastro(struct Funcionario *f){
    printf("Insira o nome do funcinário: ");
    scanf("%s", f->nome);
    printf("\nInsira o salário do funcinário: ");
    scanf ("%f",&f->salario);
}
void exiba(struct Funcionario f){
    printf("\nNome: %s", f.nome);
    printf("\nSalario: %f", f.salario);
}
void upvalor(float salario, float taxa){
    printf("Insira a porcentagem do aumento(Ex: 100 para um aumento de 100 p/cento): ");
    scanf ("%f",&taxa);
    salario = salario* (1+(taxa/100));
    printf("\nSeu salário seria: %f", salario);
}
void upreferencia( float *salario,  float taxa){
    printf("Insira a porcentagem do aumento(Ex: 100 para um aumento de 100 p/cento): ");
    scanf ("%f",&taxa);
    *salario = *salario* (1+(taxa/100));
    printf("\nSeu salário agora é: %f", *salario);
}

int main(){
    struct Funcionario f1;
    int opcao=6;
    do {
        printf("--MENU--\n1-Cadastrar funcionário");
        printf("\n2-Exibir dados do funcionário");
        printf("\n3-Aplicar aumento por valor");
        printf("\n4-Aplicar aumento por referência");
        printf("\n5-Sair\n");

        scanf("%i",&opcao);

    switch (opcao){
            case 1:
            cadastro(&f1);
                break;

            case 2:
            exiba(f1);
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
                printf("Valor Invalido\n");
                }
        }while(opcao !=5);

            }
