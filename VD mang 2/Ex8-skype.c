#include <stdio.h>
int main()
{
    char ten[5][10];
    int diem[5][6], total=0;
    float avg[5];
    //input
    printf("max length of name is 10:\n");
    for(int i=0;i<5;i++)
    {
        printf("Input name %d (max=10): ",i+1);
        scanf("%[^\n]s",&ten[i]);
        fflush(stdin);
        avg[i]=0;
        for (int j=0;j<6;j++)
        {
            printf("\nInput score[%d]: ",j);
            scanf("%d",&diem[i][j]);
            fflush(stdin);
            avg[i]+=diem[i][j];
        }
    }
    //output
    printf("+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+\n");
    printf("|Ho va ten  |   mon 1   |   mon 2   |   mon 3   |   mon 4   |   mon 5   |   mon 6   |    avg    |\n");
    printf("+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+\n");
    for (int k=0;k<5;k++)
    {
        printf("|%11s|%10d|%10d|%10d|%10d|%10d|%10d|%7.2f\n",ten[k],diem[k][0],diem[k][1],diem[k][2],diem[k][3],diem[k][4],diem[k][5],avg[k]);
    }
    return 0;

}