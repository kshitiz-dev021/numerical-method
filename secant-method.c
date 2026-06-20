#include <stdio.h>
#include <math.h>

#define f(x) (x*x*x - 2*x - 5)
#define E 0.0001

int main()
{
    float x0, x1, x2;

    printf("Enter two initial guesses: ");
    scanf("%f %f", &x0, &x1);

start:
    x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

    if (fabs(f(x2)) <= E)
        goto end;

    x0 = x1;
    x1 = x2;

    goto start;

end:
    printf("Root = %.4f\n", x2);

    return 0;
}