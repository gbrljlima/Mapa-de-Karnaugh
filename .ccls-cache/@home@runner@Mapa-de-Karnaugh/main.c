/******************************************************************************
Gabriel Lima

Mapa de Karnaugh

circulados:
4 - 6 combinações
2 - 12 combinações
1 - 8 combinações
*******************************************************************************/
#include "catalogo.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int s[8];
int main() {
  char repetir;
  do {
    saidas();
    mapa();
    formulas();
    printf("\nDeseja repetir? s/n\n");
    scanf("%s", &repetir);
    system("clear");
  } while (repetir == 's');
  return 0;
}
