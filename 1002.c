#include <stdio.h>
 
int main() {
 double n, raio, area;
 
 n = 3.14159;
 
 scanf ("%lf" , &raio);
 
 area = n * (raio*raio);
 
 printf ("A=%0.4lf\n" , area);
 
 
    return 0;
}
