#include <stdio.h>

int main() {
    int dia = 3;
    switch (dia)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
          printf("Segunda");
            break;
        case 3:
            printf("Terca");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Sexta");
            break;
        default:
            printf("Valor Invalido");  
            break;
    }
}