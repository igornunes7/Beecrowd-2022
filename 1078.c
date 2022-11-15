#include <stdio.h>

int main () {
    int i, j = 0, N;

    scanf ("%d" , &N);

    if (N <= 2 || N >= 1000) {
        return 0;
    }

    for (i = 1; i <= 10; i++) { 
            j = i * N;
            printf ("%d x %d = %d\n" , i , N , j);
        }


    return 0;
}
