#include<stdio.h>


typedef struct
{

    int block;
    char city [20];
    char fname[100];


} info;

void func(info user[])
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("\n%d", user[i].block);
        printf("\n%s",user[i].fname);

    }
m

}

int main()
{

    int i;
    info user[2];

    for(i=0; i<2; i++)
    {
        printf("Enter info of %d ",i+1);
        scanf("%d", &user[i].block);
        scanf(" %s",user[i].fname);

    }

    func(user);

    return 0;
}
