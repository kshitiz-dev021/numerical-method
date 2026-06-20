// C program to find the root of a function using the fixed point iteration method
#include <stdio.h>
#include <math.h>
#define g(x) (2-x*x)
#define  E 0.0001
int main(){
    float x0, g0, x1;
    printf("Enter the initial guess: ");
    scanf("%f", &x0);
    lbl:
    x1 = g(x0);
    if (fabs((x1-x0)/x1) <= E) {
        printf("The root is: %f\n", x1);
    }
    else {
        x0 = x1;
        goto lbl;
    }
    
    return 0;
}