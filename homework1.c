#include <stdio.h>
#include <string.h>

// 1. Reversing a String using recursion
void reverseString(char str[], int start, int end) {
    if (start == end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

// 2. Fibonacci Series using recursion
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Power Calculation (x^n) using recursion
int power(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

// 4. Greatest Common Divisor (GCD) using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// 5. Sum of Digits of a Number using recursion
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + sumOfDigits(n / 10);
}

int main() {
    // 1. Reversing a String
    char str[] = "Hello";
    printf("Original String: %s\n", str);
    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed String: %s\n\n", str);

    // 2. Fibonacci Series
    int fib_n = 10;
    printf("Fibonacci(%d): %d\n\n", fib_n, fibonacci(fib_n));

    // 3. Power Calculation
    int base = 2, exponent = 5;
    printf("%d^%d = %d\n\n", base, exponent, power(base, exponent));

    // 4. Greatest Common Divisor (GCD)
    int num1 = 56, num2 = 98;
    printf("GCD of %d and %d: %d\n\n", num1, num2, gcd(num1, num2));

    // 5. Sum of Digits of a Number
    int number = 12345;
    printf("Sum of digits of %d: %d\n", number, sumOfDigits(number));

    return 0;
}