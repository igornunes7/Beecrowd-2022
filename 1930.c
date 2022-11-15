#include <stdio.h>
 
int main() {
    int T1, T2, T3, T4;
    int total;
    scanf ("%d %d %d %d" , &T1, &T2, &T3, &T4);
    
    if ((T1 < 2 || T1 > 6)||(T2 < 2 || T2 > 6)||(T3 < 2 || T3 > 6)||(T4 < 2 || T4 > 6))
        return 0;
    else {
        total = (T1+T2+T3+T4) - 3;
        printf ("%d\n" , total);
    }
    
 
    return 0;
}
