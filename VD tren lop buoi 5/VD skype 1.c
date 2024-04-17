// #include <stdio.h>
// int main()
// {
//     int pin=1234;
//     int balance = 1000;
//     int maxAttempts = 3;
//     int option;
//     int enteredPin;
//     int withdrawAmount;
//
//     printf("Welcome to ATM\n");
//     int attempts = 0;
//     while (attempts<maxAttempts)
//     {
//         printf("Nhap ma PIN cua ban(con lai %d lan thu): ",maxAttempts - attempts);
//         scanf("%d", &enteredPin);
//
//         if (enteredPin == pin)
//         {
//             printf("Loged in\n");
//             break;
//         }
//         else
//         {
//             printf("Error, enter again!\n");
//             attempts++;
//         }
//
//     }
//
//     if (attempts == maxAttempts)
//     {
//         printf("Too much error, closed ATM card\n");
//         return 1;
//     }
//
//     while (1)
//     {
//         printf("\n Your choice?\n");
//         printf("1. Check account balance \n"
//                     "2. Cash out \n"
//                     "3. Over \n");
//         scanf("%d", &option);
//         switch (option)
//         {
//         case 1:
//             printf("Your account have: %d $\n", balance);
//             break;
//         case 2:
//             printf("Input how much money for cash out\n");
//             scanf("%d", &withdrawAmount);
//             if (withdrawAmount>balance)
//             {
//                 printf("your balance not enough money\n");
//             } else
//             {
//                 balance -= withdrawAmount;
//                 printf("Cash out %d $. Your account balance just have: %d VND\n",withdrawAmount, balance);
//             }
//             break;
//         case 3:
//             printf("Thank you, see u again!\n");
//             return 0;
//         default:
//             printf("Input again plz\n");
//         }
//     }
//     return 0;
// }
//
