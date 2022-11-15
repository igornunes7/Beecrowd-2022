#include <stdio.h>
#include <stdlib.h>
 
int main() {
	 int a, b, c, MAB;
	 int x;
	 int y;
	 
	 scanf ("%d %d %d" , &a , &b , &c);
	 
	 y = a - b;
	 
	 x = abs(y);
	
	 
	 MAB = (a+b+x) / 2;
	 
	 if (c  > MAB)
	 	MAB = c;
	 	
	 printf("%d eh o maior\n" , MAB);
 
 	
 
 
 
    return 0;
}
