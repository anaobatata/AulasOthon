#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main() {
  srand(time(NULL));
  int i, j;
  printf("Insira a quantidade de linhas: ");
  scanf("%d", &i);
  printf("Insira a quantidade de colunas: ");
  scanf("%d", &j);
  int x=i, y=j;
  int myNumbers[i][j];

  for (i = 0; i < x; i++) {
      for (j = 0; j < y; j++) {
      myNumbers[i][j] = rand() % 100;
      }
    }

  for (i = 0; i < x; i++) {
      for (j = 0; j < y; j++) {
          printf("%d ", myNumbers[i][j]);
          fflush(stdout);
          usleep(50000);
      }
      printf("\n");
  }
  return 0;
}
