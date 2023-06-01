#include "catalogo.h"
#include <stdio.h>
void saidas() {
  printf("Informe o valor de s0-s7!\n");
  for (int i = 0; i < 8; i++) {
    printf("S%d: ", i);
    scanf("%d", &s[i]);
    if (s[i] != 0 && s[i] != 1) {
      printf("\nValor de S%d Inválido!\n", i);
      i--;
      continue;
    }
  }
}