// Task 1 - Check Whether a Number is Even or Odd

// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("%d is an even number.\n", num);
//     } else {
//         printf("%d is an odd number.\n", num);
//     }

//     return 0;
// }



// Task 2 - Find the Largest Number Among Three Numbers entered by the user.

// Using if statement
// #include <stdio.h>
// int main() {
//     int num1, num2, num3;

//     printf("Enter three integers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 >= num2 && num1 >= num3) {
//         printf("%d is the largest number.\n", num1);
//     }

//     if (num2 >= num1 && num2 >= num3) {
//         printf("%d is the largest number.\n", num2);
//     }

//     if (num3 >= num1 && num3 >= num2) {
//         printf("%d is the largest number.\n", num3);
//     }

//     return 0;
// }




// Using if...else ladder

// #include <stdio.h>
// int main() {
//     int num1, num2, num3;

//     printf("Enter three integers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 >= num2 && num1 >= num3) {
//         printf("%d is the largest number.\n", num1);
//     } else if (num2 >= num1 && num2 >= num3) {
//         printf("%d is the largest number.\n", num2);
//     } else {
//         printf("%d is the largest number.\n", num3);
//     }
//     return 0;
// }



// Using nested if...else
// #include <stdio.h>
// int main() {
//     int num1, num2, num3;

//     printf("Enter three integers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 >= num2) {
//         if (num1 >= num3) {
//             printf("%d is the largest number.\n", num1);
//         } else {
//             printf("%d is the largest number.\n", num3);
//         }
//     } else {
//         if (num2 >= num3) {
//             printf("%d is the largest number.\n", num2);
//         } else {
//             printf("%d is the largest number.\n", num3);
//         }
//     }

//     return 0;
// }





// Task 3 - Calculate the Sum of Natural Numbers


// Using for Loop
// #include <stdio.h>
// int main() {
//     int n, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     printf("Sum of natural numbers up to %d is %d\n", n, sum);
//     return 0;
// }


// Using while Loop
// #include <stdio.h>
// int main() {
//     int n, sum = 0, i = 1;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     while (i <= n) {
//         sum += i;
//         i++;
//     }

//     printf("Sum of natural numbers up to %d is %d\n", n, sum);
//     return 0;
// }



// Using do while Loop
// #include <stdio.h>
// int main() {
//     int n, sum = 0, i = 1;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     do {
//         sum += i;
//         i++;
//     } while (i <= n);

//     printf("Sum of natural numbers up to %d is %d\n", n, sum);
//     return 0;
// }


// Using Recursion
// #include <stdio.h>
// int sumOfNaturalNumbers(int n) {
//     if (n == 1) {
//         return 1;
//     } else {
//         return n + sumOfNaturalNumbers(n - 1);
//     }
// }

// int main() {
//     int n;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     printf("Sum of natural numbers up to %d is %d\n", n, sumOfNaturalNumbers(n));
//     return 0;
// }




// Task 4 - Reverse a Number
// #include <stdio.h>
// int main() {
//     int num, reverse = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         reverse = reverse * 10 + num % 10;
//         num /= 10;
//     }

//     printf("Reversed number is: %d\n", reverse);
//     return 0;
// }



// Task 5 - Check Whether a Number is Palindrome or Not
// #include <stdio.h>
// int main() {
//     int num, originalNum, reverse = 0, remainder;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (num != 0) {
//         remainder = num % 10;
//         reverse = reverse * 10 + remainder;
//         num /= 10;
//     }

//     if (originalNum == reverse) {
//         printf("%d is a palindrome.\n", originalNum);
//     } else {
//         printf("%d is not a palindrome.\n", originalNum);
//     }

//     return 0;
// }




// Task 6 - Simple Calculator Using switch...case
// user enters one of operators +, -, * or /
// user enters two numbers
// print the result on the screen or print error message for the incorrect operator

// #include <stdio.h>

// int main() {
//     char operator;
//     float num1, num2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operator);

//     printf("Enter two numbers: ");
//     scanf("%f %f", &num1, &num2);

//     switch (operator) {
//         case '+':
//             printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
//             break;
//         case '-':
//             printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
//             break;
//         case '*':
//             printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
//             break;
//         case '/':
//             if (num2 != 0) {
//                 printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
//             } else {
//                 printf("Error! Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Error! Invalid operator.\n");
//     }

//     return 0;
// }




// Task 7 - Find the maximum and minimum element in an array
// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0], min = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     printf("Maximum element is: %d\n", max);
//     printf("Minimum element is: %d\n", min);

//     return 0;
// }




// Task 8 - Find Transpose of a Matrix
// #include <stdio.h>
// int main() {
// int a[10][10], transpose[10][10], r, c;
// printf("Enter rows and columns: ");
// scanf("%d %d", &r, &c);

// printf("\nEnter matrix elements:\n");
// for (int i = 0; i < r; ++i)
//     for (int j = 0; j < c; ++j) {
//         printf("Enter element a%d%d: " , i + 1, j + 1);
//         scanf("%d", &a[i][j]);
// }

// for (int i = 0; i < r; ++i)
//     for (int j = 0; j < c; ++j) {
//         transpose[j][i] = a[i][j];
// }

// printf("\nTranspose of the matrix:\n");
// for (int i = 0; i < c; ++i)
//     for (int j = 0; j < r; ++j) {
//         printf("%d ", transpose[i][j]);
//         if (j == r - 1)
//         printf("\n");
//     }
// return 0;
// }




// Task 9 - Multiply two matrices by Passing it to a Function
// multiplyMatrices() - to multiply two matrices.
// display() - to display the resultant matrix after multiplication.

// #include <stdio.h>

// void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int row1, int col1, int row2, int col2) {
//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col2; j++) {
//             result[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col2; j++) {
//             for (int k = 0; k < col1; k++) {
//                 result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
//             }
//         }
//     }
// }

// void display(int matrix[10][10], int rows, int cols) {
//     printf("Resultant Matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int row1, col1, row2, col2;

//     printf("Enter rows and columns for first matrix: ");
//     scanf("%d %d", &row1, &col1);

//     int firstMatrix[10][10];
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col1; j++) {
//             scanf("%d", &firstMatrix[i][j]);
//         }
//     }

//     printf("Enter rows and columns for second matrix: ");
//     scanf("%d %d", &row2, &col2);

//     int secondMatrix[10][10];
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < row2; i++) {
//         for (int j = 0; j < col2; j++) {
//             scanf("%d", &secondMatrix[i][j]);
//         }
//     }
//     if (col1 != row2) {
//         printf("Error! Matrix multiplication is not possible. The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
//     } else {
//         int result[10][10];
//         multiplyMatrices(firstMatrix, secondMatrix, result, row1, col1, row2, col2);
//         display(result, row1, col2);
//     }
//     return 0;
// }





// Task 10 - Sum two matrices by Passing it to a Function
// #include <stdio.h>

// void sumMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rows, int cols) {
//     // Perform matrix addition
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
//         }
//     }
// }

// void display(int matrix[10][10], int rows, int cols) {
//     printf("Resultant Matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows and columns for the matrices: ");
//     scanf("%d %d", &rows, &cols);

//     int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &firstMatrix[i][j]);
//         }
//     }

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &secondMatrix[i][j]);
//         }
//     }

//     sumMatrices(firstMatrix, secondMatrix, result, rows, cols);

//     display(result, rows, cols);

//     return 0;
// }





// Task 11 - Find the frequency of a character entered by user in a string.
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100], ch;
//     int frequency = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter a character to find its frequency: ");
//     scanf("%c", &ch);

//     for (int i = 0; i < strlen(str); i++) {
//         if (str[i] == ch) {
//             frequency++;
//         }
//     }

//     printf("The frequency of '%c' in the string is: %d\n", ch, frequency);

//     return 0;
// }




// Task 12 - Remove all characters in a string except alphabets.
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char str[100], result[100];
//     int j = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; i < strlen(str); i++) {
//         if (isalpha(str[i])) {
//             result[j++] = str[i];
//         }
//     }

//     result[j] = '\0';

//     printf("String after removing non-alphabet characters: %s\n", result);

//     return 0;
// }




// Task 13 - Factorial of a Number:

// Using For loop
// #include <stdio.h>

// int main() {
//     int num, factorial = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++) {
//         factorial *= i;
//     }

//     printf("Factorial of %d is %d\n", num, factorial);

//     return 0;
// }


// Using While loop
// #include <stdio.h>

// int main() {
//     int num, factorial = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int i = 1;
//     while (i <= num) {
//         factorial *= i;
//         i++;
//     }

//     printf("Factorial of %d is %d\n", num, factorial);

//     return 0;
// }


// Using Recursion
// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Factorial of %d is %d\n", num, factorial(num));

//     return 0;
// }
