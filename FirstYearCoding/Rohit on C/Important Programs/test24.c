#include <stdio.h>


int main()
{

    int n,m,i,j;
    scanf("%d %d",&n,&m);

    if(n>m)
    {

        for(i=1; i<=24; i++)
        {
            n=n%24;
            printf("%d",n);
            if(n==m)
                break;

                n++;
        }
    }

        else if (n<m)
        {

            for(j=n; j<=m; j++)
            {

                printf("%d",j);
            }
        }

         else if (n==m)
        {

           for(i=1; i<=25; i++)
        {
                printf("%d",n);
                n++;
                if (n>=24)
                    n=n%24;
        }
        }
        else
            printf("Wrong input");

        return 0;
    }
