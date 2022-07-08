#include <stdio.h>

int main()
{
    int num1;
    int size = (char *)(&num1 + 1) - (char *)&num1;
    printf("Size of num1: %d", size);

    return 0;
}

