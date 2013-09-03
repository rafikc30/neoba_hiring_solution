
/*=========================================================================

**** C Program to check whether a given 3x3 matrix is magic or not****
Programmed by
SUHARSH C A
S3 CSE
COLLEGE OF ENGINEERING TRIVANDRUM

========================================================================*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a[3][3],row[3],col[3],diag1=0,diag2=0,k=1,flag[9],t=0,c=0;
char ch;
//entering the elements
int z=1;
	for(i=0;i<3;i++)
	{
		printf("enter the %d row elements\n",z++);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
//printing the elements in matrix form
	for(i=0;i<3;i++)
	{
	printf("\n");
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
	}
/*checking all elements are present!
k generates no's from 1 to 9*/
	while(k<=9)
	{
	flag[k-1]=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			if(a[i][j]==k)
			flag[k-1]++;
			}
		}
/*To check repetition or presence of zero
which is not allowed in a magic matrix*/
	if(flag[k-1]>1)
		printf("\nThe number %d is repeated %d times\n",k,flag[k-1]);
	else
	{
		if(flag[k-1]==0)
		printf("\nThe number %d is not present\n",k);
	}
	k++;
	}
//checks whether all numbers from 1-9 present or not
       for(i=1;i<=9;i++)

       {
		if(flag[i-1]==1)
		{
			t++;
		}
       }

if(t==9) //t=9 if all numbers from 1-9 present
{
	for(i=0;i<3;i++)
	{
		row[i]=0;
		col[i]=0;
			for(j=0;j<3;j++)
			{
				row[i]=row[i]+a[i][j];
				col[i]=col[i]+a[j][i];

				if(i==j)
				{
				diag1=diag1+a[i][j];
				}

				if((i+j)==2)
				{
				diag2=diag2+a[i][j];
				}
			}

	}
}
else
printf("\nMAGIC MATRIX SHOULD CONTAIN NUMBERS FROM 1-9\nINVALID ENTRY\n");
/*checking the conditions for magic square matrix*/
      if(diag1==diag2)
      {
		for(i=0;i<3;i++)
		{
		if(row[i]==diag1&&col[i]==diag1&&col[i]==row[i])//checking each column,row sum and diag
		c++;
		}
      }
     if(c==3) //c=3 if all row and column sums and diag sum are equal
     printf("\nThe given matrix is MAGIC SQUARE MATRIX\n");
     else
     printf("\nThe given matrix is not a MAGIC SQUARE MATRIX\n");
getch();
return 0;
}


