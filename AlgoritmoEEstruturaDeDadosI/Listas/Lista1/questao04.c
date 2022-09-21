#include <stdio.h>
// Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem se é um triângulo escaleno, um triângulo equilátero ou um triângulo isóscele. Considerando os seguintes conceitos:
  // - O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
  // - Chama-se equilátero o triângulo que tem três lados iguais.
  // - Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
  // - Recebe o nome de escaleno o triângulo que tem os três lados diferentes.

int main(void) {
  int a, b, c;
  printf("Digite o lado A: ");
  scanf("%d", &a);
  printf("Digite o lado B: ");
  scanf("%d", &b);
  printf("Digite o lado C: ");
  scanf("%d", &c);

  if (a < (b + c) && b < (a + c) && c < (a + b)) {
    if (a == b && b == c) {
    printf("É um triângulo equilátero");
      
    } else {
      
      if (a != b && b != c && a != c) {
        printf("É um triângulo escaleno");
      } else {
        printf("É um triângulo isósceles");
      }
    }
  } else {
    printf("Não é um triângulo");
  }
  return 0;
}