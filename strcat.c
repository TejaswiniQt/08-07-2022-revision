#include <stdio.h>
#include<string.h>

void str_cat(char *str1, char *str2)
{
    int len = strlen(str1);
    int i;
    for(i = 0;str2[i] != '\0';i++)
    {
        str1[len + i] = str2[i];
    }
    str1[len + i] = '\0';
}

int main()
{
    char str1[20], str2[20];
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    str_cat(str1, str2);
    printf("After string concatenation: str1 = %s\n", str1);

    return 0;
}

