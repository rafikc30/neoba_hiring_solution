/* ROHAN REJI*/

#include<stdio.h>
int main()
{
	int a[20][20],i,j,d[100],f=1,k;
	int s[100]={0};
	int n;
	printf("\n Enter the Order of square matrix::");
	scanf("%d",&n);
	printf("\n enter the matrix...");
	for(i=0;i<n;i++)
	{
		printf("\n   enter the %d ROW::\n",i+1);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			d[i+j]=a[i][j];
			for(k=i+j-1;k>=0;k--)
			{
				if(d[k]==a[i][j])
				{
					f=0;
					break;
				}
			}
			
			if(f==1)
			{
				s[i]=s[i]+a[i][j];
				s[j+n]=s[j+n]+a[i][j];
				if(i==j)
				{
					s[n+n]=s[n+n]+a[i][j];
				}
				if(i==(n-1-j))
				{
					s[n+n+1]=s[n+n+1]+a[i][j];
				}
			}
		}
	}
	if(f==1)
	{
		for(k=0;k<n+n+2;k++)
		{
			for(i=k-1;i>=0;i--)
			{
				if(s[k]!=s[i])
				{
					f=0;
					break;
				}
			}
		}
	}
	if(f==0)
	{
		printf("\n the ENTERED %d*%d MATRIX is not a magic square\n",n,n);
	}
	else
	{
		printf("\n the ENTERED %d*%d MATRIX is a magic square\n",n,n);
	}
	return 0;
}



/*
	OUTPUT

 Enter the Order of square matrix::3

 enter the matrix...
   enter the 1 ROW::
4
9
2

   enter the 2 ROW::
3
5
7

   enter the 3 ROW::
8
1
6

 the ENTERED 3*3 MATRIX is a magic square



 Enter the Order of square matrix::3

 enter the matrix...
   enter the 1 ROW::
1
2
3

   enter the 2 ROW::
4
5
6

   enter the 3 ROW::
7
8
9

 the ENTERED 3*3 MATRIX is not a magic square


*/

