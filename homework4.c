// Task 1
// #include <stdio.h>

// int main() {
//     int arr[100], evenArr[100], oddArr[100];
//     int n, evenCount = 0, oddCount = 0;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the array: \n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) {
//             evenArr[evenCount] = arr[i];  
//             evenCount++;
//         } else {
//             oddArr[oddCount] = arr[i];
//             oddCount++;
//         }
//     }


//     printf("Even numbers: ");
//     for (int i = 0; i < evenCount; i++) {
//         printf("%d ", evenArr[i]);
//     }
//     printf("\n");

//     printf("Odd numbers: ");
//     for (int i = 0; i < oddCount; i++) {
//         printf("%d ", oddArr[i]);
//     }

//     return 0;
// }







// Task 2
// #include <stdio.h>

// int main() {
//     int arr[100], positiveArr[100], negativeArr[100];
//     int n, positiveCount = 0, negativeCount = 0;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);


//     printf("Enter the elements of the array: \n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             positiveArr[positiveCount] = arr[i];  
//             positiveCount++;
//         } else {
//             negativeArr[negativeCount] = arr[i];
//             negativeCount++;
//         }
//     }


//     printf("Even numbers: ");
//     for (int i = 0; i < positiveCount; i++) {
//         printf("%d ", positiveArr[i]);
//     }
//     printf("\n");



//     printf("Odd numbers: ");
//     for (int i = 0; i < negativeCount; i++) {
//         printf("%d ", negativeArr[i]);
//     }

//     return 0;
// }







// Task 3
// #include <stdio.h>
// #include <stdbool.h>

// bool is_prime(int num) {
//     if (num <= 2){
//         return false;   
//     }  
//     for (int i = 2; i <= sqrt(num); i++) { 
//         if (num % i == 0){                  
//             return false;
//         }
//     }
//     return true;                           
// }



// int main() {
//     int arr[100], primeArr[100], nonPrimeArr[100];
//     int n, primeCount = 0, nonPrimeCount = 0;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);


//     printf("Enter the elements of the array: \n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    
//     for (int i = 0; i < n; i++) {
//         if (is_prime(arr[i])) {
//             primeArr[primeCount] = arr[i];  
//             primeCount++;
//         } else {
//             nonPrimeArr[nonPrimeCount] = arr[i];
//             nonPrimeCount++;
//         }
//     }


//     printf("Even numbers: ");
//     for (int i = 0; i < primeCount; i++) {
//         printf("%d ", primeArr[i]);
//     }
//     printf("\n");



//     printf("Odd numbers: ");
//     for (int i = 0; i < nonPrimeCount; i++) {
//         printf("%d ", nonPrimeArr[i]);
//     }

//     return 0;
// }







// Task 4
// #include <stdio.h>

// int main() {
//     int arr[100], freq[100];
//     int n, i, j, count;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

  
//     printf("Enter the elements of the array: \n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         freq[i] = -1;
//     }

   
//     for (i = 0; i < n; i++) {
//         count = 1;
//         for (j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 freq[j] = 0; 
//             }
//         }
//         if (freq[i] != 0) {
//             freq[i] = count;
//         }
//     }


//     printf("Frequency of each element:\n");
//     for (i = 0; i < n; i++) {
//         if (freq[i] != 0) {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }

//     return 0;
// }







// Task 5
// #include <stdio.h>

// int main() {
//     int arr[100], freq[100];
//     int n, i, j, count;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

  
//     printf("Enter the elements of the array: \n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         freq[i] = -1;
//     }

   
//     for (i = 0; i < n; i++) {
//         count = 1;
//         for (j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 freq[j] = 0; 
//             }
//         }
//         if (freq[i] != 0) {
//             freq[i] = count;
//         }
//     }


    
//     int max = arr[0];
//     int max_freq = freq[0];

//     for (i = 0; i < n; i++) {
//         if (freq[i] > max_freq) {
//             max_freq = freq[i];
//             max = arr[i];
//         }
//     }

//     printf("Max Frequent element is %d which occures %d times", max, max_freq);

//     return 0;
// }








// Task 6
// #include <stdio.h>

// int main() {
//     int arr[100], freq[100];
//     int n = 0, num, count;

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     while(num != 0){
//         arr[n] = num % 10;
//         num /= 10;
//         freq[n] = -1;
//         n++;
//     }

   
//     for (int i = 0; i < n; i++) {
//         count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 freq[j] = 0; 
//             }
//         }
//         if (freq[i] != 0) {
//             freq[i] = count;
//         }
//     }


//     printf("Frequency of each element:\n");
//     for (int i = 0; i < n; i++) {
//         if (freq[i] != 0) {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }

//     return 0;
// }
