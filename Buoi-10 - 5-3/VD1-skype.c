#include <stdio.h>
#include <math.h>
void Switchcasefun(int a);
float chuvihinhtronfun(float r);
float dientichhinhtronfun(float r);
float chuvihinhchunhatfun(float a, float b);
float dientichhinhchunhatfun(float a, float b);
float chuvihinhbinhhanhfun(float a, float b);
float dientichhinhbinhhanhfun(float a, float h);
float chuvihinhthoifun(float a);
float dientichhinhthoifun(float m, float n);
float chuvihinhtamgiacfun(float a, float b, float c);
float dientichhinhtamgiacfun(float a, float h);

int main()
{
    printf("****----Tinh chu vi, dien tich----****\n");
    printf("1. Hinh tron\n"
           "2. Hinh chu nhat\n"
           "3. Hinh binh hanh\n"
           "4. Hinh thoi\n"
           "5. Hinh tam giac\n"
           "****------------------------------****\n");
    int z;
    do
    {
        printf("Moi chon hinh ban mong muon tinh(1-5): ");
        scanf("%d",&z);
        if (z<1 || z>5)
        {
            printf("Moi ban nhap lai!!!\n");
        }
    } while (z<1 || z>5);
        Switchcasefun(z);
}

void Switchcasefun(int a)
{
    switch(a)
    {
    case 1:
        float bankinh_hinhtron;
        printf("\nNhap duong kinh: ");
        scanf("%f",&bankinh_hinhtron);
        printf("\nChu vi hinh tron: %.2f",chuvihinhtronfun(bankinh_hinhtron));
        printf("\ndien tich hinh tron: %.2f",dientichhinhtronfun(bankinh_hinhtron));
        break;
    case 2:
        float chieudai_hinhchunhat,chieurong_hinhchunhat;
        printf("\nNhap chieu dai: ");
        scanf("%f",&chieudai_hinhchunhat);
        printf("\nNhap chieu rong: ");
        scanf("%f",&chieurong_hinhchunhat);
        printf("\nChu vi hinh chu nhat: %.2f",chuvihinhchunhatfun(chieudai_hinhchunhat,chieurong_hinhchunhat));
        printf("\ndien tich hinh chu nhat: %.2f",dientichhinhchunhatfun(chieudai_hinhchunhat,chieurong_hinhchunhat));
        break;
    case 3:
        float canhA_hinhbinhhanh,canhB_hinhbinhhanh,chieucao_hinhbinhhanh;
        printf("\nNhap canh A: ");
        scanf("%f",&canhA_hinhbinhhanh);
        printf("\nNhap canh B: ");
        scanf("%f",&canhB_hinhbinhhanh);
        printf("\nNhap chieu cao: ");
        scanf("%f",&chieucao_hinhbinhhanh);
        printf("\nChu vi hinh binh hanh: %.2f",chuvihinhbinhhanhfun(canhA_hinhbinhhanh,canhB_hinhbinhhanh));
        printf("\ndien tich hinh binh hanh: %.2f",dientichhinhbinhhanhfun(canhA_hinhbinhhanh,chieucao_hinhbinhhanh));
        break;
    case 4:
        float duongcheo1_hinthoi,duongcheo2_hinthoi;
        printf("\nNhap duong cheo 1: ");
        scanf("%f",&duongcheo1_hinthoi);
        printf("\nNhap duong cheo 2: ");
        scanf("%f",&duongcheo2_hinthoi);
        float canhA_hinhthoi=sqrt((duongcheo1_hinthoi/2)*(duongcheo1_hinthoi/2)+(duongcheo2_hinthoi/2)*(duongcheo2_hinthoi/2));
        printf("\nChu vi hinh thoi: %.2f",chuvihinhthoifun(canhA_hinhthoi));
        printf("\ndien tich hinh thoi: %.2f",dientichhinhthoifun(duongcheo1_hinthoi,duongcheo2_hinthoi));
        break;
    case 5:
        float canhA_hinhtamgiac,canhB_hinhtamgiac,canhC_hinhtamgiac,chieucaocanhA_hinhtamgiac;
        printf("\nNhap canh A: ");
        scanf("%f",&canhA_hinhtamgiac);
        printf("\nNhap canh B: ");
        scanf("%f",&canhB_hinhtamgiac);
        printf("\nNhap canh C: ");
        scanf("%f",&canhC_hinhtamgiac);
        printf("\nNhap chieu cao canh A: ");
        scanf("%f",&chieucaocanhA_hinhtamgiac);
        printf("\nChu vi hinh tam giac: %.2f",chuvihinhtamgiacfun(canhA_hinhtamgiac,canhB_hinhtamgiac,canhC_hinhtamgiac));
        printf("\ndien tich hinh tam giac: %.2f",dientichhinhtamgiacfun(canhA_hinhtamgiac,chieucaocanhA_hinhtamgiac));
        break;
    }
}
//hinh tron
float chuvihinhtronfun(float r)
{
    float chuvihinhtron=r*2*3.14;
    return(chuvihinhtron);
}
float dientichhinhtronfun(float r)
{
    float dientichhinhtron=r*r*3.14;
    return(dientichhinhtron);
}
//hinh chunhat
float chuvihinhchunhatfun(float a, float b)
{
    float chuvihinhchunhat=(a+b)*2;
    return(chuvihinhchunhat);
}
float dientichhinhchunhatfun(float a, float b)
{
    float dientichhinhchunhat=a*b;
    return(dientichhinhchunhat);
}
//hinh binh hanh
float chuvihinhbinhhanhfun(float a, float b)
{
    float chuvihinhbinhhanh=(a+b)*2;
    return(chuvihinhbinhhanh);
}
float dientichhinhbinhhanhfun(float a, float h)
{
    float dientichhinhbinhhanh=a*h;
    return(dientichhinhbinhhanh);
}
//hinh thoi
float chuvihinhthoifun(float a)
{
    float chuvihinhthoi=a*4;
    return(chuvihinhthoi);
}
float dientichhinhthoifun(float m, float n)
{
    float dientichhinhthoi=m*n;
    return(dientichhinhthoi);
}
//hinh tam giac
float chuvihinhtamgiacfun(float a, float b, float c)
{
    float chuvihinhtamgiac=a+b+c;
    return(chuvihinhtamgiac);
}
float dientichhinhtamgiacfun(float a, float h)
{
    float dientichhinhtamgiac=a*h/2;
    return(dientichhinhtamgiac);
}
