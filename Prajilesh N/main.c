#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum,b[10]={0};
    printf("\nEnter the Matrix : \n");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
                scanf("%d",&a[i][j]);
                     sum+=a[i][j];b[a[i][j]]=1;
                if((a[i][j]<1) || (a[i][j]>9))
                {
                    printf("\nNumber Entered is not in (1-9)");
                    return 0;
                }
                b[a[i][j]]=1;
        }
        if(sum!=15)
        {
            printf("\nThis Sequence Does not form a Magic Square !!");
            return 0;
        }
    } 

    if(a[1][1]!=5)
    {
        printf("\nEntered Matrix is not a Magic Square !!");
        return 0;
    }

    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
            sum+=a[j][i];

        if(sum!=15)
        {
            printf("\nEntered Matrix is not a Magic Square !! ");
            return 0;
        }
    }

    if(((a[0][0]+a[2][2])==10 && (a[0][2]+a[2][0])==10))
    {
        sum=0;
        for(i=1;i<10;i++)
            sum+=b[i];
        if(sum==9)
            printf("\nEntered  Matrix is a magic Square ");
        else
            printf("\nMatrix is magic squrae but not distinct numbers in (1-9)");

    }
         else
        printf("\nEntered Matrix is not a Magic Square ");
  return 0;

}
