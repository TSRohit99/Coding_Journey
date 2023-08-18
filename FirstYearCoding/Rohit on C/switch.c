#include <stdio.h>

int main()
{


    int num;
    printf("Enter a single digit number between 1 to 5: ");
    scanf("%d", &num);

    switch (num)
    {

    case 1:
        printf("One \n");
        break;
    case 2:
        printf("Two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    case 4:
        printf("Four \n");
        break;
    case 5:
        printf("Five \n");
        break;

        default:
        printf("salar beta ita kitar number dile ita 1 taki 5 or bitre nay");
    }



    return 0;


}
