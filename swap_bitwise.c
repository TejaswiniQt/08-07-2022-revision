#include<stdio.h>

void swap(int *num1, int *num2)
{
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

int main()
{
    int num1, num2;
    printf("Enter the value for num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n",num1, num2);
}

