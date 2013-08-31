//compiled on GCC
#define SIZE 3
#include<stdio.h>
int ismagic(int a[SIZE][SIZE]);
void initmatrix(int a[SIZE][SIZE]);
int entrycheck(int a[SIZE][SIZE], int num);
void main()
{
	int a[SIZE][SIZE],magic=0;
	initmatrix(a);                  //for initializing and displaying matrix
	magic=ismagic(a);               //checks if a is a magic square
	if(magic)
	printf("\nIt is a magic square\n");
	else
	printf("\nIt is not a magic square\n");
}

int ismagic(int a[SIZE][SIZE])
{
	int i=0,j=0,d1=0,d2=0;           //d1, d2 for sum of diagonal elements 
	int sum[2][SIZE]={0};            //sum[0] for storing row sums, sum[1] columns 
	for(i=1;i<=(SIZE*SIZE);++i)      //checking if all 1-9 numbers are present
	{
		if(!entrycheck(a,i))    
		return 0;               //if not then a is not magic square
	}
	
	for(i=0;i<SIZE;++i)             //find saves the sum of all rows, columns and diagonals 
	{		
		for(j=0;j<SIZE;++j)
		{	
			if((a[i][j]<1)||(a[i][j]>(SIZE*SIZE)))
			return 0;
			sum[0][i]+=a[i][j]; //sum[0][i] holds sum of row i
			sum[1][j]+=a[i][j]; //sum[1][j] holds sum of column j
			if((i+j)==(SIZE-1))
			d1+=a[i][j];        //sum of minor diagonal
			if(i==j)
			d2+=a[i][j];       //sum of major diagonal
				
		}
	}
	
	if(d1!=d2)                         //checking for equality of diagonal sum
	return 0;
	else
	{
		for(i=0;i<2;++i)
		{			
			for(j=0;j<SIZE;++j)
			{
				if(sum[i][j]!=d1)
				return 0;
			}		
		}	
	}
	return 1;	
	


}
void initmatrix(int a[SIZE][SIZE])
{
	int i,j;
	printf("Enter the matrix to be checked\n");	
	for(i=0;i<SIZE;++i)
	{		
		for(j=0;j<SIZE;++j)
		{
			printf("Enter the element of row no %d & column number %d: ",i+1,j+1);
			scanf("%d",&a[i][j]);		
		}
	}
	printf("The given matrix is:");
	for(i=0;i<SIZE;++i)
	{	
		printf("\n");	
		for(j=0;j<SIZE;++j)
		{
			printf("%d\t",a[i][j]);		
		}
	}
}
int entrycheck(int a[SIZE][SIZE],int num)
{
	int i,j;	
	for(i=0;i<SIZE;++i)
	{		

		for(j=0;j<SIZE;++j)
		{
			if(a[i][j]==num)
			return 1;
		}
	}
	return 0;
}	
