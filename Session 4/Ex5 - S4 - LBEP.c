#include <stdio.h>

int main() {
    float a = 12000, b, c = 150, d = 120, e = 450, f, g, z, sum;
    printf("Employee's Salary: \n");
    b = 0.12 * a;
    f = 0.14 * a;
    g = 0.15 * a;
    z = f + g;
    sum = a + b + c + d + e;
    printf("Based salary = $%.2f\n", a);
    printf("DA = %.2f\n", b);
    printf("HRA = %.2f\n", c);
    printf("TA = %.2f\n", d);
    printf("Other = %.2f\n", e);
    printf("PF = %.2f\n", f);
    printf("IT = %.2f\n\n", g);
    printf("Before Tax = %.2f\n", sum);
    printf("Tax = %.2f + %.2f = $%.2f\n", f, g,-z);
    printf("Salary Total = $%.2f", sum-z);
    return 0;
}