#include <stdio.h>
int main()
{
    float A,B,C;
    printf("Input A,B,C: ");
    scanf("%f,%f,%f",&A,&B,&C);
    if (A>B && A>C)
        printf("Max is A: %.2f",A);
    else if (B>A && B>C)
        printf("Max is B: %.2f",B);
    else
        printf("Max is C: %.2f",C);
    return 0;
}