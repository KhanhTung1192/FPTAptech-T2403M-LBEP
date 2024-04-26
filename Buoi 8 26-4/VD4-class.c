// #include <stdio.h>
// int performOperation();
// int main()
// {
//     int num1,num2;
//     char operator;
//     printf("First number: ");
//     scanf("%d",&num1);
//     printf("operator(+,-,*,/): ");
//     scanf(" %c",&operator);
//     printf("Second number: ");
//     scanf("%d",&num2);
//     int result = performOperation(num1,num2,operator);
//     printf("result: %d\n",result);
//     return 0;
// }
// int performOperation(int num1, int num2, char operator)
// {
//     int result;
//     switch (operator)
//     {
//     case '+':
//         result=num1+num2;
//         break;
//     case '-':
//         result=num1-num2;
//         break;
//     case '*':
//         result=num1*num2;
//         break;
//     case '/':
//         result=num1/num2;
//         break;
//     default:
//         printf("invalid operator\n");
//         result=0;
//     }
//     return result;
// }