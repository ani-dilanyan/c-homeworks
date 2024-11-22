#include <stdio.h>
// Task 1
// int main(){
//     int account_number;
//     float beggining_balance, total_charges, total_credits, credit_limit;

//     printf("Enter account number (-1 to end): ");
//     scanf("%d", &account_number);

//     if(account_number == -1){
//         return 0;
//     }

//     printf("Enter beggining balance: ");
//     scanf("%f", &beggining_balance);

//     printf("Enter total charges: ");
//     scanf("%f", &total_charges);

//     printf("Enter total credits: ");
//     scanf("%f", &total_credits);

//     printf("Enter credit_limit: ");
//     scanf("%f", &credit_limit);

//     if(beggining_balance+total_charges-total_credits > credit_limit){
//         printf("Account: %d \n", account_number);
//         printf("Credit limit: %.2f \n", credit_limit);
//         printf("Balance: %.2f \n", beggining_balance);
//         printf("Credit Limit Exceeded.");
//     }

//     return 0;
// }



// Task 2
// int main() {
//     int number, count = 0;
//     int sum = 0;
//     float average;

//     printf("Enter integers (9999 to end): \n");
//     scanf("%d", &number);

   
//     while (number != 9999) {
//         sum += number;   
//         count++;         
//         scanf("%d", &number); 
//     }

   
//     if (count > 0) {
//         average = (float)sum / count;
//         printf("The average is: %.2f\n", average);
//     } else {
//         printf("No valid integers entered.");
//     }

//     return 0;
// }




// Task 3
// #include <stdio.h>

// int main() {
//     int rows = 9;

//     int top_rows = rows/2+1;
//     int bottom_rows = rows/2;

//     // Top half
//     for (int i = 1; i <= top_rows; i++) {
//         // Print spaces
//         for (int j = i; j < top_rows; j++) {
//             printf(" ");
//         }
        
//         // Print stars
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Bottom half 
//     for (int i = bottom_rows; i >= 1; i--) {
//         // Print spaces
//         for (int j = bottom_rows+1; j > i; j--) {
//             printf(" ");
//         }
//         // Print stars
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// Task 4
// #include <stdio.h>

// int main() {
//     int rows;

//     printf("Input odd number of rows in range 1 to 19: ");
//     scanf("%d", &rows);

//     if(rows % 2 == 0 || rows < 1 || rows > 19){
//         printf("Program exited, you entered invalid number!");
//         return 0;
//     }


//     int top_rows = rows/2+1;
//     int bottom_rows = rows/2;

//     // Top half
//     for (int i = 1; i <= top_rows; i++) {
//         // Print spaces
//         for (int j = i; j < top_rows; j++) {
//             printf(" ");
//         }
        
//         // Print stars
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Bottom half 
//     for (int i = bottom_rows; i >= 1; i--) {
//         // Print spaces
//         for (int j = bottom_rows+1; j > i; j--) {
//             printf(" ");
//         }
//         // Print stars
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }