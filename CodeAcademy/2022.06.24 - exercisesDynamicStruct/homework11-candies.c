// Обичате да ядете бонбони, нали. Искате винаги да имате N бонбона в
// себе си. Всеки час можете да си купите по един бонбон, да изядете по един
// бонбон, който имате, или да удвоите всички бонбони. За колко най-малко
// часа може да постигнете това?
// Например:
// Ако N е 1, отговорът би бил 0 (нищо за правене, вече имате 1).
// Ако N е 2, отговорът би бил 1 (бихте могли или да купите нов бонбон, или да
// удвоите тези, които имате).
// Ако N е 7, отговорът би бил 4 (добавяте 1 в първия час, удвоявате двата
// втория, удвоявате четирите третия и изяждате един през четвъртия час).
// Ако N е 19, отговорът би бил 6: добавяте (стават 2), удвоявате (стават 4),
// добавяте (стават 5), удвоявате (стават 10), удвоявате (стават 20), изяждате
// (стават 19).

#include <stdio.h>
#include <stdlib.h>

int bonbon(int N);

/*
hours 0       1       2       3       4        5        6
1 ->  1
2 ->  1     (1+1)2 
7 ->  1     (1+1)2  (2*2)4  (4*2)8  (8-1)7
19->  1     (1+1)2  (2*2)4  (4+1)5  (5*2)10 (10*2)20 (20-1)19
*/

int main()
{
    int N = 0;
    printf("Enter target bonbons: ");
    scanf("%d", &N);
    int result = bonbon(N);
    printf("You need %d hours!\n", result);

    return 0;
}

int bonbon(int N)
{
    int temp = 1, hours = 0;
    while (temp != N)
    {
        hours++;
        if (hours == 1)
            temp += 1;

        if ((temp * 2) - 1 < N)
            temp *= 2;
        else if (temp < N)
            temp += 1;
        else if (temp > N)
            temp -= 1;
        printf("%d-%d\n", hours, temp);
    }
    return hours;
}