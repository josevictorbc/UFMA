#include <stdio.h>
// Dado n, calcular a soma dos n primeiros números inteiros positivos

int main(void) {
  int numero;
  int total = 0;
  
  printf("Digite um número: ");
  scanf("%d", &numero);

  for (int i= 1; numero >= i; i++) {
    total = total + i;
  }
  printf("A soma dos %d primeiros números inteiros positivos é %d\n", numero, total);
  
  return 0;
}