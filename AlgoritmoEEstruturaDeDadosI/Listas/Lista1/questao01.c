#include <stdio.h>
// Faça um programa para ler o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve informar o horário (hora, minuto e segundo) de termino da mesma. Assumindo que o experimento inicia e termina no mesmo dia.

int main(void) {
  int hora, minuto, segundo, duracao;
  
  printf("Digite a hora: ");
  scanf("%d", &hora);
  printf("Digite o minuto: ");
  scanf("%d", &minuto);
  printf("Digite o segundo ");
  scanf("%d", &segundo);
  printf("Digite a duração do experimento (em segundos): ");
  scanf("%d", &duracao);
  
  int total = hora * 3600 + minuto * 60 + segundo + duracao;
  int novaHora = total / 3600;
  int novoMinuto = (total % 3600) / 60;
  int novoSegundo = (total % 60) % 60;
  
  printf("\nO Horário que o experimento terminou foi: %d:%d:%d", novaHora, novoMinuto, novoSegundo);

  return 0;
}