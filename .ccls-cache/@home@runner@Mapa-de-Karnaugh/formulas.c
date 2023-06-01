#include "catalogo.h"
#include <stdbool.h>
#include <stdio.h>
void formulas() {
  bool redundancia[6] = {0}; // Redudância dos 4 circulados
  bool primeiroResultado =
      true; // Se não for o primeiro resultado, adicionar um + antes do print
  bool redHorizontal(); // Função da redundância horizontal
  // 4 circulados - 6 combinações
  if (s[0] && s[1] && s[4] && s[5]) {
    if (primeiroResultado) {
      printf("nB");
      primeiroResultado = false;
    } else {
      printf(" + nB");
    }
    redundancia[0] = true;
  }
  if (s[1] && s[3] && s[5] && s[7]) {
    if (primeiroResultado) {
      printf("C");
      primeiroResultado = false;
    } else {
      printf(" + C");
    }
    redundancia[1] = true;
  }
  if (s[3] && s[2] && s[7] && s[6]) {
    if (primeiroResultado) {
      printf("B");
      primeiroResultado = false;
    } else {
      printf(" + B");
    }
    redundancia[2] = true;
  }
  if (s[0] && s[2] && s[4] && s[6]) {
    if (primeiroResultado) {
      printf("nC");
      primeiroResultado = false;
    } else {
      printf(" + nC");
    }
    redundancia[3] = true;
  }
  if (s[0] && s[1] && s[3] && s[2]) {
    if (primeiroResultado) {
      printf("nA");
      primeiroResultado = false;
    } else {
      printf(" + nA");
    }
    redundancia[4] = true;
  }
  if (s[4] && s[5] && s[7] && s[6]) {
    if (primeiroResultado) {
      printf("A");
      primeiroResultado = false;
    } else {
      printf(" + A");
    }
    redundancia[5] = true;
  }
  // 2 circulados - 12 combinations
  // vertical - 4
  if (s[0] && s[4] && !redundancia[0] && !redundancia[3]) {
    if (primeiroResultado) {
      printf("nB*nC");
      primeiroResultado = false;
    } else {
      printf(" + nB*nC");
    }
  }
  if (s[1] && s[5] && !redundancia[0] && !redundancia[1]) {
    if (primeiroResultado) {
      printf("nB*C");
      primeiroResultado = false;
    } else {
      printf(" + nB*C");
    }
  }
  if (s[3] && s[7] && !redundancia[1] && !redundancia[2]) {
    if (primeiroResultado) {
      printf("B*C");
      primeiroResultado = false;
    } else {
      printf(" + B*C");
    }
  }
  if (s[2] && s[6] && !redundancia[2] && !redundancia[3]) {
    if (primeiroResultado) {
      printf("B*nC");
      primeiroResultado = false;
    } else {
      printf(" + B*nC");
    }
  }
  // horizontal - 8
  // top - 4
  if (s[0] && s[1] && !redundancia[0] && !redundancia[4]) {
    // Imprimir quando fizer o diagonal do T (ex: s2 e s7(/) e s0 e s5(\) e
    // quando as saídas opostas forem 0)
    if ((!s[4] && !s[5]) || (s[2] && s[4]) || (s[3] && s[5])) {
      if (primeiroResultado) {
        printf("nA*nB");
        primeiroResultado = false;
      } else {
        printf(" + nA*nB");
      }
    }
  }
  if (s[1] && s[3] && !redundancia[1] && !redundancia[4]) {
    if ((!s[5] && !s[7]) || (s[0] && s[5]) || (s[2] && s[7])) {
      if (primeiroResultado) {
        printf("nA*C");
        primeiroResultado = false;
      } else {
        printf(" + nA*C");
      }
    }
  }
  if (s[3] && s[2] && !redundancia[2] && !redundancia[4]) {
    if ((!s[7] && !s[6]) || (s[0] && s[6]) || (s[1] && s[7])) {
      if (primeiroResultado) {
        printf("nA*B");
        primeiroResultado = false;
      } else {
        printf(" + nA*B");
      }
    }
  }
  if (s[2] && s[0] && !redundancia[3] && !redundancia[4]) {
    if ((!s[6] && !s[4]) || (s[3] && s[6]) || (s[1] && s[4])) {
      if (primeiroResultado) {
        printf("nA*nC");
        primeiroResultado = false;
      } else {
        printf(" + nA*nC");
      }
    }
  }
  // baixo - 4
  if (s[4] && s[5] && !redundancia[0] && !redundancia[5]) {
    if ((!s[0] && !s[1]) || (s[0] && s[6]) || (s[1] && s[7])) {
      if (primeiroResultado) {
        printf("A*nB");
        primeiroResultado = false;
      } else {
        printf(" + A*nB");
      }
    }
  }
  if (s[5] && s[7] && !redundancia[1] && !redundancia[5]) {
    if ((!s[1] && !s[3]) || (s[1] && s[4]) || (s[3] && s[6])) {
      if (primeiroResultado) {
        printf(" A*C");
        primeiroResultado = false;
      } else {
        printf(" + A*C");
      }
    }
  }
  if (s[7] && s[6] && !redundancia[2] && !redundancia[5]) {
    if ((!s[3] && !s[2]) || (s[3] && s[5]) || (s[2] && s[4])) {
      if (primeiroResultado) {
        printf("A*B");
        primeiroResultado = false;
      } else {
        printf(" + A*B");
      }
    }
  }
  if (s[6] && s[4] && !redundancia[3] && !redundancia[5]) {
    if ((!s[2] && !s[0]) || (s[0] && s[5]) || (s[2] && s[7])) {
      if (primeiroResultado) {
        printf("A*nC");
        primeiroResultado = false;
      } else {
        printf(" + A*nC");
      }
    }
  }
  // solo - 8 combinações
  if (s[0] && !s[1] && !s[4] && !s[2]) {
    if (primeiroResultado) {
      printf("nA*nB*nC");
      primeiroResultado = false;
    } else {
      printf(" + nA*nB*nC");
    }
  }
  if (s[1] && !s[0] && !s[5] && !s[3]) {
    if (primeiroResultado) {
      printf("nA*nB*C");
      primeiroResultado = false;
    } else {
      printf(" + nA*nB*C");
    }
  }
  if (s[2] && !s[0] && !s[6] && !s[3]) {
    if (primeiroResultado) {
      printf("nA*B*nC");
      primeiroResultado = false;
    } else {
      printf(" + nA*B*nC");
    }
  }
  if (s[3] && !s[1] && !s[7] && !s[2]) {
    if (primeiroResultado) {
      printf("nA*B*C");
      primeiroResultado = false;
    } else {
      printf(" + nA*B*C");
    }
  }
  if (s[4] && !s[0] && !s[6] && !s[5]) {
    if (primeiroResultado) {
      printf(" A*nB*nC");
      primeiroResultado = false;
    } else {
      printf(" + A*nB*nC");
    }
  }
  if (s[5] && !s[4] && !s[1] && !s[7]) {
    if (primeiroResultado) {
      printf("A*nB*C");
      primeiroResultado = false;
    } else {
      printf(" + A*nB*C");
    }
  }
  if (s[6] && !s[4] && !s[2] && !s[7]) {
    if (primeiroResultado) {
      printf("A*B*nC");
      primeiroResultado = false;
    } else {
      printf(" + A*B*nC");
    }
  }
  if (s[7] && !s[3] && !s[6] && !s[5]) {
    if (primeiroResultado) {
      printf("A*B*C");
      primeiroResultado = false;
    } else {
      printf(" + A*B*C");
    }
  }
}