#include <stdio.h>
// Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996

int main(void) {
  int ano;
  
  printf("Digite o ano: ");
  scanf("%d", &ano);
  
  if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
    printf("%d é um ano bissexto", ano);
    
  } else {
    printf("%d não é um ano bissexto", ano);
  }
  return 0;
}