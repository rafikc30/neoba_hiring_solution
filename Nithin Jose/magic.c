#include<stdio.h>
int clean_stdin()							//a function to remove stdin buffer to avoid infinite occurance of loop if a character is inserted bychance in an integer variable
{
while(getchar()!='\n');
return 1;
}
void main()
{
int square[3][3],i,j,check,k,l,sumr[3],sumc[3],d1,d2,m,flag;
char inp,c;
printf("\n\t\tMagic Square\n");
do									//do loop is used to give user a chance to try another set of squares if necessary
{
flag=0,d1=0,d2=0;
for(i=0;i<3;i++)							//Loop to input data to the matrice
	for(j=0;j<3;j++)
	{
	sumr[i]=0;
	sumc[i]=0;
	do
	{
	printf("Input integer values for position %d %d\n",i+1,j+1);
	}while((scanf("%d%c",&square[i][j],&c)!=2||c!='\n')&&clean_stdin());//inputting elements and checking if it is a character
	if(square[i][j]<1||square[i][j]>9)				//Condition to check whether the input lies between 0 and 9
		{
		printf("\nInvalid input(nos from 1-9 only allowed).Try again\n");
		j--;
		}
	else
	for(k=0;k<=i;k++)                 				//Loop to check whether the number is repeated or not
		{
		check=0;
		for(l=0;(k<i&&l<3||k==i&&l<j);l++)
		if(square[i][j]==square[k][l])
			{
			printf("\nThe number %d is already entered,enter any other number\n",square[i][j]);
			j--;
			check=1;
			break;
			}
		if(check==1)
		break;
		}
	}

printf("\nThe square is: \n");
for(i=0;i<3;i++)									//Loop to print and find the sum of rows,columns and diagonal sums
	{
	printf("\n\t\t");
	for(j=0;j<3;j++)
		{
		sumr[i]=sumr[i]+square[i][j];
		sumc[j]=sumc[j]+square[i][j];
		if(i==j)
		d1=d1+square[i][j];
		if((i+j)==2)
		d2=d2+square[i][j];
		printf("%d\t",square[i][j]);
		}
	}
m=sumr[0];
for(i=0;i<3;i++)
if(sumr[i]!=m||sumc[i]!=m||d1!=m||d2!=m)						//Condition to check whether the sums are equal
flag=1;
if(flag==0)
printf("\n\nThe given square is a Magic Square\n");
else
printf("\n\nThe given square is not a Magic square\n");
printf("\n\n\nDo you want to try again?\n(Press y to continue or press any other key to exit)\n");
scanf(" %c",&inp);
system("clear");									//To clear screen if using ubuntu
}while(inp=='y'||inp=='Y');
}

