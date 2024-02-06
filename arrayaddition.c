#include<stdio.h>
int main()
{
    int a[3] = {1 , 2, 3};
    int empty = 0;
    for(int i = 0 ; i<3 ; i++)
    {
        empty += a[1];
    }
    printf("%d",empty);
    return 0;
}