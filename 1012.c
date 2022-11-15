#include <stdio.h>
 
int main() {
 double a,b,c, triangulo, circulo, trapezio, quadrado, retangulo, pi;
 
 scanf ("%lf" , &a);
 scanf ("%lf" , &b);
 scanf ("%lf" , &c);
 
 pi = 3.14159;
 
 triangulo = (a * c) / 2;
 circulo = pi * (c * c);
 trapezio = ((a + b) * c) / 2;
 quadrado = b * b;
 retangulo = a * b;
 
 
 printf ("TRIANGULO: %0.3lf\n" , triangulo);
 printf ("CIRCULO: %0.3lf\n" , circulo);
 printf ("TRAPEZIO: %0.3lf\n" , trapezio);
 printf ("QUADRADO: %0.3lf\n" , quadrado);
 printf ("RETANGULO: %0.3lf\n" , retangulo);
 
 
 
    return 0;
}
