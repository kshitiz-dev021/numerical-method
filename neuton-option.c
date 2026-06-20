// C program to find the root of a function using the Newton-Raphson method
#include <stdio.h>
#include <math.h>
#define f(x) (x*x-3*x+2) 
#define g(x) (2*x-3)
#define  E 0.0001
int main(){
    float x0, f0, g0, x1;
    printf("Enter the initial guess: ");
    scanf("%f", &x0);
    lbl:
    f0 = f(x0);
    g0 = g(x0);
    x1 = x0 - (f0/g0);
    if (fabs((x1-x0)/x1) <= E) {
        printf("The root is: %f\n", x1);
    }
    else {
        x0 = x1;
        goto lbl;
    }
    return 0;
}
