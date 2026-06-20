#include <stdio.h>
float taxa;
struct Funcionario{
    char nome[50];
    float salario;
};

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
    while(opcao !=0){
        printf("--MENU--\n1-Cadastrar funcionário");
        printf("\n2-Exibir dados do funcionário");
        printf("\n3-Aplicar aumento por valor");
        printf("\n4-Aplicar aumento por referência");
        printf("\n5-Sair");

        scanf("%i",&opcao);
        
    switch (opcao){
            case 1:
                printf("Insira o nome do funcinário: ");
                scanf ("%s", f1.nome);
                printf("\nInsira o salário do funcinário: ");
                scanf ("%f",&f1.salario);
                break;

            case 2:
                printf("\nNome: %s", f1.nome);
                printf("\nSalario: %f", f1.salario);
                break;
            case 3:
                upvalor(f1.salario, taxa);
                break;
            case 4:
                upreferencia(&f1.salario, taxa);
                break;
            case 5:
                opcao = 0;
                break;
            case 6:
                printf("Bem-vindo ao programa\n");
                break;
            default:
                printf("Valor Invalido\n");  
                
                }
                    }

            }
            
            
            
            