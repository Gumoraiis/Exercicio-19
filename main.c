#include <stdio.h>
#include<math.h>

int main(void) {
  int H, M, S, TS, N;

  printf("Digite o valor total de segundos: "); 
  scanf("%d", &TS);

  H = TS / 3600;
  N = TS % 3600;
  M = N / 60;
  S = N % 60;
  

  printf("Horas: %d\n", H);
  printf("Minutos: %d\n", M);
  printf("Segundos: %d\n", S);
  
  return 0;
  
}