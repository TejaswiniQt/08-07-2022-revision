#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter the bit: ");
    scanf("%d", &n);
    //set nth bit
    num = num | (1 << n);
    printf("After setting the %d bit: num = %d\n", n, num);
    
    //clear nth bit
    num = num & ~(1 << n);
    printf("After clearing the %d bit: num = %d\n", n, num);
    
    //toggle nth bit
    num = num ^ (1 << n);
    printf("After setting the %d bit: num = %d\n", n, num);

    return 0;
}


