#include <stdio.h>

int main() {
    float base = 12000, DA, HRA = 150, TA = 120, Others = 450, PF, IT, Tax, sum;
    printf("Employee's Salary: \n");
    DA = 0.12 * base;
    PF = 0.14 * base;
    IT = 0.15 * base;
    Tax = PF + IT;
    sum = base + DA + HRA + TA + Others;
    printf("Based salary = $%.2f\n", base);
    printf("DA = %.2f\n", DA);
    printf("HRA = %.2f\n", HRA);
    printf("TA = %.2f\n", TA);
    printf("Others = %.2f\n", Others);
    printf("PF = %.2f\n", PF);
    printf("IT = %.2f\n\n", IT);
    printf("Before Tax = %.2f\n", sum);
    printf("Tax = %.2f + %.2f = $%.2f\n", PF, IT,-Tax);
    printf("Salary Total = $%.2f", sum-Tax);
    return 0;
}