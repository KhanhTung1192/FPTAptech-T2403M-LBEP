// #include <stdio.h>
// #define COFFEE_PRICE 2.5
// #define TEA_PRICE 2.0
// #define SMOOTHIE_PRICE 3.0
//
// int main()
// {
//     int numCoffees=0,numTeas=0,numSmoothies=0;
//     float totalCost;
//     char choice;
//
//     printf("welcome to coffee shop!\n");
//     do
//     {
//         printf("\n---Menu---\n"
//                "1.Coffee($%.2f)\n"
//                "2.Tea ($%.2f)\n"
//                "3.Smoothie ($%.2f)\n"
//                "4.Quit\n "
//                "Your choice: ", COFFEE_PRICE,TEA_PRICE,SMOOTHIE_PRICE);
//         choice=getchar();
//         fflush(stdin);
//         switch(choice)
//         {
//         case 49:
//             numCoffees++;
//             break;
//         case 50:
//             numTeas++;
//             break;
//         case 51:
//             numSmoothies++;
//             break;
//         case 52:
//             break;
//         default:
//             printf("Invalid choice. Try again.\n");
//         }
//     } while(choice !='4');
//     totalCost=(numCoffees*COFFEE_PRICE)+(numTeas*TEA_PRICE)+(numSmoothies*SMOOTHIE_PRICE);
//     printf("\nOrder details:----\n"
//            "Coffees: %d\n"
//            "Teas: %d\n"
//            "Smoothies: %d\n"
//            "Total cost: $%.2f\n"
//            "Thank you!\n",numCoffees,numTeas,numSmoothies,totalCost);
//     return 0;
// }
