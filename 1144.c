#include <stdio.h>
 
int main() {
 int N, primeiro, segundo, terceiro;

 
 
 do {
    scanf ("%d" , &N);
 } while (N <= 1 || N >= 1000);
 
for (primeiro = 1; primeiro <= N; primeiro++) {
    segundo = primeiro * primeiro;
    terceiro = primeiro * primeiro * primeiro;
    
    printf ("%d %d %d\n" , primeiro , segundo , terceiro);
    printf ("%d %d %d\n" , primeiro, segundo+1, terceiro+1);
    
}

 
    return 0;
}
