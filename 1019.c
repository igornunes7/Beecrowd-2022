#include <stdio.h>
 
int main() {
  int N;
  int horas, minutos, segundos; 
  int i;
  
  scanf ("%d" , &N);
  segundos = N;
  
  if (N >= 60) {
      horas = segundos / 3600;
      segundos = segundos - (horas * 3600);
      minutos = segundos / 60;
      segundos = segundos - (minutos * 60);
      printf ("%d:%d:%d\n" , horas, minutos, segundos);
    } else {
      horas = 0;
      minutos = 0;
      
      printf ("%d:%d:%d\n" , horas, minutos, segundos);
    }

  
    return 0;
}
