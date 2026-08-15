#include <complex.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

struct abastecimento {
  float quilometragem;
  float valor_total;
  float preco_combustivel;
  char tipo_combustivel;
};
void limpar() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}

void Fadicionar(int i, struct abastecimento a1[100]) {
  int correto = 0;
  char x;
  printf("Digite a quilometragem atual: ");
  scanf("%f", &a1[i].quilometragem);
  limpar();
  printf("Digite o valor total:\n ");
  scanf("%f", &a1[i].valor_total);
  limpar();
  printf("Digite a o preco do combustível:\n ");
  scanf("%f", &a1[i].preco_combustivel);
  limpar();

  do {
    printf("Escolha um combustível: ");
    scanf("%c", &x);
    x = toupper(x);
    if (x == 'G' || x == 'D' || x == 'E') {
      correto = 1;
    } else {
      correto = 0;
    }

  } while (correto == 0);
  a1[i].tipo_combustivel = x;
  limpar();
  i++;
}
void Flistar(int i, struct abastecimento a1[100]) {
  for (int n = 0; i > n; n++) {
    printf("\n--Abastecimento N-%i--\n", n);
    printf("quilometragem: %f\n", a1[n].quilometragem);
    printf("valor total %f\n", a1[n].valor_total);
    printf("preco: %f\n", a1[n].preco_combustivel);
    printf("Tipo %c\n", a1[n].tipo_combustivel);
  };
}
double Flitros(int i, struct abastecimento a1[100]) {
  double soma;
  for (int n = 0; i > n; n++) {
    soma = soma + a1[n].valor_total / a1[n].preco_combustivel;
  }
  return soma;
}
double Fmedia(int i, struct abastecimento a1[100]) {
  double media;
  for (int n = 0; i > n; n++) {
    media = media + a1[n].preco_combustivel;
  }
  return media / i;
}
double Fmenor(int i, struct abastecimento a1[100]) {
  float menor;
  for (int n = 0; i > n; n++) {
    if (menor > a1[n].valor_total) {
      menor = a1[n].valor_total;
    }
  }
  return menor;
}
double Fmaior(int i, struct abastecimento a1[100]) {
  float maior;
  for (int n = 0; i > n; n++) {
    if (maior < a1[n].valor_total) {
      maior = a1[n].valor_total;
    }
  }
  return maior;
}
double Ftotal(int i, struct abastecimento a1[100]) {
  double total;
  for (int n = 0; i > n; n++) {
    total = total + a1[n].valor_total;
  }
  return total;
}

void Fresumo(int i, struct abastecimento a1[100]) {
  double total = Ftotal(i, a1);
  double soma = Flitros(i, a1);
  double maior = Fmaior(i, a1);
  double menor = Fmenor(i, a1);
  double media = Fmedia(i, a1);
  printf("\n===== ABASTECIMENTOS =====");
  printf("\nQuantidade de abastecimentos: %i", i);
  printf("\nTotal gasto: %f", total);
  printf("\nnTotal de litros: %f L", soma);
  printf("\nnMaior abastecimento: R$ %f", maior);
  printf("\nmenor abastecimento: R$ %f", menor);
  printf("\nPreço médio do combustível: R$ %f", media);
}
void menu(int *n, int i, struct abastecimento a1[100]) {
  system("clear");
  printf("== == = CONTROLE DE ABASTECIMENTOS == == =\n");
  printf("1 - Adicinar abastecimento printf\n");
  printf("2 - Listar abastecimentos\n");
  printf("3 – Exibir a quantidade total de litros abastecidos\n");
  printf("4 - Exibir o abastecimento de maior valor\n");
  printf("5 - Calcular total gasto com combustível\n");
  printf("6 – Exibir resumo dos abastecimento\n");
  printf("7-Sair\n");
  scanf("%i", n);
  // array  dass funnçẽos
  switch (*n) {
  case 1:
    Fadicionar(i, a1);
    break;
    printf("abastecimento adicionado!");
  case 2:
    Flistar(i, a1);
    break;
  case 3:
    Flitros(i, a1);
    break;
  case 4:
    Fmaior(i, a1);
    break;
  case 5:
    Ftotal(i, a1);
    break;
  case 6:
    Fresumo(i, a1);
    break;
  default:
    printf("Valor invalido");
    break;
  }
}

int main() {
  struct abastecimento a1[100];
  int n, i = 0;
  do {
    menu(&n, i, a1);

  } while (n != 7);
  printf("saindo...");
}
