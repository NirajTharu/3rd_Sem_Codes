#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float f(float x) {
    return pow(x, 2) + x - 2;
}

int main() {
    float x1, x2, x0, error = 0.0001;
    int i = 0;

    printf("Enter two initial guesses: ");
    scanf("%f %f", &x1, &x2);

    // //if (f(x1) * f(x2) > 0) {
    //     printf("Wrong input! The function values at the initial guesses have the same sign.\n");
    //     exit(0);
    // } else {
        do {
            x0 = (x1 + x2) / 2.0; // Bisection method
            if (f(x1) * f(x0) < 0)
                x2 = x0;
            else
                x1 = x0;
            i++;
        } while (fabs(f(x0)) > error);
    // }

    printf("Root = %f\n", x0);
    printf("Number of iterations = %d\n", i);

    return 0;
}
