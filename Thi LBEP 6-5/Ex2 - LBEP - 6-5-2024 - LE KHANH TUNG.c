#include <stdio.h>
float crystalTienDien(int sokWh);
int main()
{
    //INPUT
    float kWh_num;
    printf("Input your number of kWh used: ");
    scanf("%f",&kWh_num);
    //Function ouput
    printf("\nYour bill of [%.2f] used is: %.2fVND\n",kWh_num,crystalTienDien(kWh_num));
    printf("-------------------------------------------------\n");
    printf("Your bill of [30] used is: %.2fVND\n",crystalTienDien(30));
    printf("Your bill of [80] used is: %.2fVND\n",crystalTienDien(80));
    printf("Your bill of [120] used is: %.2fVND\n",crystalTienDien(120));
    return 0;
}
//Function calculate electric bills
float crystalTienDien(int sokWh)
{
    float Bill_total;
    float a,b;
    a=50*500;
    b=50*700;
    if(sokWh-100>0)
        Bill_total=((sokWh-100)*900)+a+b;
    else if(sokWh-50>0)
        Bill_total=((sokWh-50)*700)+a;
    else
        Bill_total=sokWh*500;
    return Bill_total;
}