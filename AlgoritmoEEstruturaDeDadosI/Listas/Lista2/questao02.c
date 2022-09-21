#include <stdio.h>
// Dados o número n de alunos de uma turma e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0)

int main(void) {
  int alunos;
  int nota;
  int maiorNota;
  int menorNota;
  
  printf("Digite o número de alunos da classe: ");
  scanf("%d", &alunos);
  
  for (int i= 1; alunos >= i; i++) {
    printf("Digite a nota do aluno %d: ", i);
    scanf("%d", &nota);
    
    if (nota >= maiorNota && nota >= 0 && nota <= 100) {
      maiorNota = nota;
    } else if (nota <= menorNota) {
      menorNota = nota;
    } else {
      continue;
    }
  }
  
  printf("A maior nota é %d e a menor nota é %d", maiorNota, menorNota);
  return 0;
}