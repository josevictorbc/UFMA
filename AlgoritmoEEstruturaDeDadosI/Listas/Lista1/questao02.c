#include <stdio.h>
// Ler um número inteiro e imprimir a soma do sucessor de seu triplo com o antecessor de seu dobro.

int main(void) {
  int numero;
  
  printf("Digite um número: ");
  scanf("%d", &numero);
  
  int resultado = (3 * numero + 1) + ( 2 * numero - 1);
  
  printf("A soma do sucessor do triplo de %d com o antecessor do seu dobro é %d", numero, resultado);

  return 0;
}