// Task 1
// #include <stdio.h> 
// int is_perfect(int num){
//     int sum = 0;

//     for(int i = 1; i <= num/2; i++){
//         if(num % i == 0){
//             sum += i;
//         }
//     }

//     return num == sum;
// }

// void print_factors(int num){
//     for(int i = 1; i <= num/2; i++){
//         if(num % i == 0){
//             printf("%d\n", i);
//         }
//     }
//     printf("\n");
// }

// int main(){
//     for(int i = 1; i <= 1000; i++){
//         if(is_perfect(i)){
//             printf("%d is a perfect number.\n", i);
//             print_factors(i);
//         }
//     }
//     return 0;
// }







// Task 2
// #include <stdio.h>

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int num1, num2;

//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     int g = gcd(num1, num2);

//     printf("The GCD of %d and %d is: %d\n", num1, num2, g);
//     return 0;
// }







// Task 3
// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[]) {
    // int left = 0;
    // int right = strlen(str) - 1;

//     while (left < right) {
//         char temp = str[left];
//         str[left] = str[right];
//         str[right] = temp;

//         left++;
//         right--;
//     }
// }

// int main() {
//     char str[] = "Hello, World!";
//     printf("String: %s\n", str);

//     reverseString(str);

//     printf("Reversed string: %s\n", str);
//     return 0;
// }







// Task 4
// #include <stdio.h>

// double power(double x, int n) {
//     double result = 1.0;
//     for (int i = 1; i <= n; i++) {
//         result *= x;
//     }
//     return result;
// }

// int main() {
//     double x;
//     int n;

//     printf("Enter the base (x): ");
//     scanf("%f", &x);

//     printf("Enter the exponent (n): ");
//     scanf("%d", &n);

//     double result;
    
//     if (n < 0) {
//         result = 1.0 / power(x, -n);
//     } else {
//         result = power(x, n);
//     }
    
//     printf("%.2f ^ %d = %.2f", x, n, result);

//     return 0;
// }







// Task 5
// #include <stdio.h>
// int sumOfDigits(int num) {
//     int sum = 0;

//     while (num != 0) {
//         sum += num % 10; 
//         num = num / 10;     
//     }

//     return sum;
// }


// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int result = sumOfDigits(num);

//     printf("Sum of digits = %d", result);

//     return 0;
// }







// Task 6
// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[], int left, int right) {
//     if (left <= right) {
//         char temp = str[left];
//         str[left] = str[right];
//         str[right] = temp;

//         reverseString(str, left + 1, right - 1);
//     }else{
//         return;
//     }
// }



// int main() {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);

//     reverseString(str, 0, strlen(str) - 1);

//     printf("Reversed string: %s", str);
//     return 0;
// }







// Task 7
// #include <stdio.h>

// double power(double x, int n) {
//     if (n == 0) {
//         return 1;
//     }
   
//     return x * power(x, n - 1);
// }

// int main() {
//     double x;
//     int n;

//     printf("Enter the base (x): ");
//     scanf("%lf", &x);

//     printf("Enter the exponent (n): ");
//     scanf("%d", &n);

//     double result = power(x, n);
//     printf("%.2f ^ %d = %.2f", x, n, result);

//     return 0;
// }







// Task 8
// #include <stdio.h>

// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;
//     }else if (n == 1) {
//         return 1;
//     }else{
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int n;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci series up to %d n:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }

//     return 0;
// }







// Task 9
// #include <stdio.h>

// int gcdR(int x, int y) {
//     if (y == 0) {
//         return x;
//     }else{
//     return gcdR(y, x % y);
//     }
// }

// int main() {
//     int num1, num2;
//     printf("Enter two integers: ");
//     scanf("%d", &num1);
//     scanf("%d", &num2);


//     int g = gcdR(num1, num2);

//     printf("The GCD of %d and %d is: %d", num1, num2, g);

//     return 0;
// }







// Task 10
// #include <stdio.h>

// int sumOfDigits(int num) {
//     if (num == 0) {
//         return 0;
//     }
    
//     return (num % 10) + sumOfDigits(num / 10);
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int result = sumOfDigits(num);

//     printf("Sum of digits: %d", result);

//     return 0;
// }



