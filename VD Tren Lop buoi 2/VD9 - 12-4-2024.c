/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float bmi, w, h;

    printf("Input W(kg): \n");
    scanf("%f",&w);
    if (w<1 || w>500)
    do {
        printf("Wrong one, Input W(kg): \n");
        scanf("%f",&w);
    } while(w<1 || w>500);

    printf("Input H(m): \n");
    scanf("%f",&h);
    if (h<1 || h>250)
    do {
        printf("Wrong one, Input H(m): \n");
        scanf("%f",&h);
    } while(h<1 || h>250);

    bmi=w/(h*h);

    if (bmi<18.5)
        printf("You thin");
    else if (bmi<24.9)
        printf("you normal");
    else if (bmi<29.9)
        printf("you fat");
    else
        printf("you really really fat");

return 0;
}
*/
