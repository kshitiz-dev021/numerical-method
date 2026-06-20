// C program to find the root of a function using the false position method
#include <stdio.h>
#include <math.h>
#define f(x) (x*x-x-2) 
#define  E 0.0001 
int main(){
    float x0, x1, x2, x3, f0, f1, f2;
    lbl:
    printf("Enter the initial guesses: ");
    scanf("%f %f", &x1, &x2);
    f1 = f(x1);
    f2 = f(x2);
    if (f1 * f2 > 0) {
        printf("The function has the same sign at the initial guesses. Please try again.\n");
        goto lbl;
    }
    else{
        lbl1:
        x0 = x1-((f1*(x2-x1))/(f2-f1)),
        f0 = f(x0);
        if(f0==0){
            printf("The root is: %f\n", x0);
        }
        else if (f0 * f1 < 0) {
            x2 = x0;
        }
        else {
            x1 = x0;
        }
        if (fabs((x2-x1)/x2) <= E) {
            printf("The root is: %f\n", x0);
        }
        else {
            goto lbl1;
        }
    }
    return 0;
}