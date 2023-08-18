#include <stdio.h>

int szof_str(char str[])
{
    int length = strlen(str);

    return length;
}

int main()
{

    char str[100];
    printf("Enter any line to find out length: ");
    scanf("%[^\n]s", &str);
    int sum = szof_str(str);

    printf("\nTotal words in the para(including spaces): %d",sum);
    printf("\n");

    return 0;
}
