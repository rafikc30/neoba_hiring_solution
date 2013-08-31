#include <stdio.h>
int main()
{
    int matrix[3][3],i,j,k,l,m,sum,duplicate=0;
    printf(" Enter the matrix(3 X 3)\n");
    for(k=0;k<2;++k)
        for(i=0;i<3;++i)
            {
                sum=0;
                for(j=0;j<3;++j)
                    {
                        if(k==0)
                        {
                            printf("\n A(%d,%d)? ",i+1,j+1);
                            scanf("%d",&matrix[i][j]);
                            sum+=matrix[i][j];/*row sum*/
                            if(matrix[i][j]<=0||matrix[i][j]>9||(i==j&&j==1&&matrix[1][1]!=5))
                                goto finish;
                            for(l=0;l<=i;++l)
                                for(m=0;m<3;++m)
                                {
                                    if(l==i&&m==j)
                                        break;
                                    else if(matrix[l][m]==matrix[i][j])
                                        goto finish;
                                }
                        }
                        else
                            sum+=matrix[j][i];/*column sum*/
                    }
                if(i==0&&j==3&&k==0)
                    duplicate=sum;
                if((duplicate!=sum)||sum!=15)
                    {
                        finish:
                        printf("\n Not a Magic Matrix!\n\n");
                        return 0;
                    }
            }
       (matrix[0][0]+matrix[2][2]==matrix[0][2]+matrix[2][0])?printf("\nIs a Magic matrix\n\n"):0;
}
