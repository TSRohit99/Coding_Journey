#include <stdio.h>

int main()
{


    int clicked;
    float temp, ConvTemp;


    printf("Welcome to the Temperature Converter menu\n ");
    printf("1. Fahrenheit to Celsius\n ");
    printf("2. Celsius to Fahrenheit\n ");
    printf("Enter your choice: ");
    scanf("%d", &clicked);

    switch(clicked)

    {
    case 1:
    {

        printf("Enter the Fahrenheit Temperature : ");
        scanf("%f",&temp);
        ConvTemp= (temp-32)/1.8;
        printf("The temperature is Celsius is : %f °C",ConvTemp);
        break;

    }


    case 2:
    {
        printf("Enter the Celsius Temperature : ");
        scanf("%f",&temp);
        ConvTemp= (temp*1.8)+32;
        printf("The temperature is Fahrenheit is : %f °F",ConvTemp);
    }
    break;


    default:
        printf("Rehhh bai kali number type koros na!!! ita aje baje type korre kne!! temperature abr number cara oy ni commmon sense nai nooob");
    }


        return 0;


    }
