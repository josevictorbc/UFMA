#include <stdio.h>
// Faça um programa que receba vários números, até que se digite 0. Calcule e mostre:
// a. A soma dos números digitados
// b. A quantidade de números digitados

int main(void) {
  int numero;
  int contador;
  int soma = 0;
  
  for(;;){
    if (numero != 0){
      printf("Para parar o loop digite 0\n");
      printf("Digite um número: ");
      scanf("%d", &numero);
      
      soma = soma + numero;
      contador ++;
    } else {
      break;
    }
  }
  printf("\nA soma dos números digitados é igual a %d\n", soma);
  printf("A quantidade de números digitados é igual a %d\n", contador);
  
  return 0;
}