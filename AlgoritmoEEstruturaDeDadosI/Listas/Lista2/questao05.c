#include <stdio.h>
#include <math.h>
// Faça um programa que dê um n, calcule a somatória dos n elementos da seguinte sequencia:
// s = 1 + 3 + 9 + 27 + 81 ...

int main(void) {
  int numero;
  int resultado = 0;
  
  printf("Digite um número: ");
  scanf("%d", &numero);

  for(int i = 0; i <= numero; i++) {
    resultado = resultado + pow(3, i);
  }

  printf("A soma da sequência é igual a %d", resultado);
  return 0;
}