#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int length, i;

    printf("Enter the first string: ");
    scanf("%s", &str1);

    printf("Enter the second string: ");
    scanf("%s", &str2);

    length = 0;

    while (str2[length] != '\0')
    {
        length = length + 1;
    }

    for (i = 0; str1[i] != '\0'; i++, length++)
    {
        str2[length] = str1[i];
    }

    str2[length] = '\0';

    printf("After Concatenation: ");

    printf("%s", str2);

    return 0;
}