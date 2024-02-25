//add include statements

#include "repetition.h"

//add function(s) code here

int factorial(int num) {
    int sum = 1;
    while (num > 0) {
        sum *= num;
        num--; 
    }
    return sum;
}

int gcd(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2; 
        } else {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
    return num1;
}
