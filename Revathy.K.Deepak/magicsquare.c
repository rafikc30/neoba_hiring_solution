#include<stdio.h>
#include<stdbool.h>

//function to input matrix
void input(int nMatrix[3][3])
{
 int row,col;
 printf("\nenter the matrix row wise:\n");
 for(row=0;row<3;row++)
  for(col=0;col<3;col++)
   scanf("%d", &nMatrix[row][col]);
}

//function to check whether matrix is magic square
bool check(int nMatrix[3][3])
{
 int sum1,sum,row,col;
 sum=sum1=0;
 //fn to check whether traces r equal
 for(row=0;row<3;row++)
 for(col=0;col<3;col++)
  {
   if(row==col) sum+=nMatrix[row][col];
   if(2==row+col) sum1+=nMatrix[row][col];
  } 
 if (sum!=sum1) return false;
 //fn to check equality of sum of rows
 else
 {
  for(row=0;row<3;row++)
  {
   sum1=0;
   for(col=0;col<3;col++)
    sum1+=nMatrix[row][col];
   if(sum!=sum1) return false;
  }
 } 
 return true; 
}

// main program
void main()
{
 bool bResult;
 int  nMatrix[3][3];
 input(nMatrix);
 bResult=check(nMatrix);
 if(true==bResult)
  printf("\ngiven matrix is a magic square\n ");
 else 
  printf("\ngiven matrix is not a magic square\n ");
}


