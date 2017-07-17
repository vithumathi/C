/* Objective:

    Input:

    output:

    */

#include <stdio.h>

// Declare Function prototypes

int summation (int a);
int fact (int b);
int fibonacci (int c);
int gcd (int w, int x);
int power (int y, int z);

int main (void){

    int userChoice, userValue1, userValue2, rValue;

   do{ 
        printf("Please enter the corresponding number of the function to execute: \n");
        printf("1. Summation\n");
        printf("2. Factorial\n");
        printf("3. Fibonacci\n");
        printf("4. GCD\n");
        printf("5. Power\n");
        printf("6. Exit\n");
        scanf("%d", &userChoice);
    
    

// Menu layout
    
        switch(userChoice){

            case 1 : printf("Please enter a value: ");
                 scanf("%d", &userValue1);
                 rValue = summation(userValue1);
                 if (rValue < 0) printf("Invalid Input\n");
                 else printf("%d\n", rValue);
                 break;
            case 2 : printf("Please enter a value: ");
                 scanf("%d", &userValue1);
                 rValue = fact(userValue1);
                 if (rValue < 0) printf("Invalid Input\n");
                 else printf("%d\n", rValue);
                 break;
            case 3 : printf("Please enter a value: ");
                 scanf("%d", &userValue1);
                 rValue = fibonacci(userValue1);
                 if (rValue < 0) printf("Invalid Input\n");
                 else printf("%d\n", rValue);
                 break;
            case 4 : printf("Please enter two value (seperated by space): ");
                 scanf("%d %d", &userValue1, &userValue2);
                 rValue = gcd(userValue1, userValue2);
                 if (rValue < 0) printf("Invalid Input\n");
                 else printf("%d\n", rValue);
                 break;
            case 5 : printf("Please enter two value (seperated by space): ");
                 scanf("%d %d", &userValue1, &userValue2);
                 rValue = power(userValue1, userValue2);
                 if (rValue < 0) printf("Invalid Input\n");
                 else printf("%d\n", rValue);
                 break;
            default: printf("ERROR: Selection must be from the menu shown");
        }
    } while(userChoice != 6);

return 0;
}





int summation (int a){

    if ( a < 1){
        return -1;
    }
    else{
        int sum = 0;
        for (int i = 0; i <= a; i++){
            sum +=i;
        }
    return sum;
    }    
}

int fact(int n){

    if ( n < 0){
        return -1;
    }
    else{
        int i, sum = 1;
        for (i = 2; i <= n; i++)
            sum *= i;

        return sum;
    }
}

int fibonacci (int c){

    if ( c < 0){
        return -1;
    }
    else{
        int fib_2 = 0;
        int fib_1 = 1;
        int fib = 0;

        if (c==0 || c==1){
            return c;
        }

        for(int i = 2;i <= c; i++){
            fib = fib_1 + fib_2;
            fib_2 = fib_1;
            fib_1 = fib;
        }
    return fib;  
    }
}

int gcd(int m, int n){

    if ( (m < 0) || (n < 0)){
        return -1;
    }
    else{
        int remainder;
    
        while (n > 0) {
            remainder = m % n;
            m = n;
            n = remainder;
        }
    return m;
    }
}

int power (int y, int z){

    if ( y <= 0 || z < 0){
        return -1;
    }
    else{
        int temp = 1;

        for (int i = 1; i <= z; i++){
            temp = temp * y;
        }
    return temp;
    }
}