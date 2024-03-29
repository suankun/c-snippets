/*
 * Problem 2: Write a program that reads an integer six-digit number and
 * finds the face of the rectangle with side "a" equal to the sum of
 * even digits and side "b" equal to the sum of the even digits.
 */

#include <stdio.h>

int readNumber() {
    int num = 0;
    do
    {
        printf("Enter a 6 digits number: ");
        scanf("%d", &num);
    } while (num < 100000 || num > 999999);
    return num;
}

void rectangleSides(int *a, int *b, int num) {
    int currentDigit = 0;
    while(num > 0)
    {
        /*Taking the last digit from num.*/
        currentDigit = num % 10;
        /*Checking if the digit is even or odd.*/
        if(currentDigit % 2 == 0)
            *a += currentDigit;
        else
            *b += currentDigit;
        /*receiving the next digit*/
        num /= 10;
    }
}

void printResult(int *a, int *b) {
    printf("The area of a rectancle with side a = %d and side b = %d is %d\n", *a, *b, (*a) * (*b));
}

int main()
{
    int a = 0, b = 0;

    // read 6 digit number
    int num = readNumber();

    // calculating sides of the rectrangle
    rectangleSides(&a, &b, num);
    
    //print result
    printResult(&a, &b);

    return 0;
}