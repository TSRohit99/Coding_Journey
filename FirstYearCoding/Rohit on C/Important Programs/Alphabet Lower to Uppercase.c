#include <stdio.h>

int main()

{
    //Lower to upper

    /*char lw;
    printf("Type any Lowercase letter: ");
    scanf("%c",&lw);

    printf("The uppercase of this letter is : %c",lw-32);*/


    //Upper to lower

    /*char up;
    printf("Type any Uppercase  letter: ");
    scanf("%c",&up);

    printf("The uppercase of this letter is : %c",up+32);*/

    //Lower to upper using library function

    /*char lw1,up1;
    printf("Enter any Lowercase letter : ");
    scanf("%c", &lw1);

    up1= toupper(lw1);
    printf("The uppercase of this letter is: %c",up1);*/

    //upper to lower using library function

    char lw2,up2;
    printf("Enter any Uppercase letter : ");
    scanf("%c", &up2);

    lw2= tolower(up2);
    printf("The Lowercase of this letter is: %c",lw2);





    return 0;


}
