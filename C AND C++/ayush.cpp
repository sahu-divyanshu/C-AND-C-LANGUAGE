//012
//Pointers and Arrays with char

#include<stdio.h>
int main()
{
    char *x;
    char z[5];
    x =&z[0];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nENETR ELEMNET NO %d:",i+1);
        scanf("%c",x+i);

    // x+i-->here x have base address so we are adding 4 to base address every time we run loop and 4 because of int type
    //&x[i] == x+i
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",*x);
    }
}
