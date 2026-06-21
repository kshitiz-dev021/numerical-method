#include <stdio.h>
#include <math.h>
#define f(x) (x*x*x - 2*x - 5)
#define E 0.0001

int main(){
    
    float x1, x2, x3, f1, f2;
    
    
    printf("Enter two initial guesses x1 and x2: ");
    scanf("%f %f", &x1, &x2);

    lbl1:
    f1 = f(x1);
    f2 = f(x2);

    
  
    x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);

    
    if(fabs((x3 - x2) / x2) <= E){
        
        printf("Root value is x3: %f\n", x3);
        return 0;
    }
    else {
        x1 = x2;
        x2 = x3;

        goto lbl1;
    }
    return 0;
}