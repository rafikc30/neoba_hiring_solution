#include <stdio.h>
#include <stdlib.h>

int check()
{
    int a[3][3],i,j;
    printf("enter the 3x3 matrix : \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
    if((a[1][1] !=5)||((a[0][0]+a[2][2]) != 10)||((a[0][2]+a[2][0]) != 10))
        return 0;
    else
        for(i=0;i<3;i++)
        if((a[i][0]+a[i][1]+a[i][2]) != 15 )return 0;
        else if((a[0][i]+a[1][i]+a[2][i]) != 15 )return 0;
    else return 1;
}

int main()
{
    int x;
    x = check();
    if(x==0)
        printf("not magic matrix");
    else
        printf(" magic matrix");
    return 0;
}
