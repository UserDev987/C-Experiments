/* Understanding Pointers */
/* Rynite */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *x, b, c;

int main (void) {
    int a;
    printf("*****TOOL********\n");
    printf("How much you want to allocate?\n ");
    scanf("%i", &a);
    x = (int*) malloc(a *(sizeof(int)));
    for(int y = 0; y < a; y++) {
        printf("%i is ", y);
        scanf("%i", &b);
        x[y] = b;
    }
    scanf("%i", &c);
    printf("%i", x[c]);


}
