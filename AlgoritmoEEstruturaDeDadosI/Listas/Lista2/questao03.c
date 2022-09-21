#include <stdio.h>
// Faça um programa que calcule o fatorial de um dado número inteiro positivo.

int main(void) {
  int numero;
  int resultado = 1;

  printf("Digite o número que queira descobrir o fatorial: ");
  scanf("%d", &numero);

  for (int i = 0; numero > i; i++) {
    resultado = resultado  * (numero - i);
  }
  printf("O resultado de %d! é %d", numero, resultado);
  return 0;
}