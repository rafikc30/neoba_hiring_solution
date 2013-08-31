#include<stdio.h>
int calc(int A[3][3]);
void main()
{
 int i,j,val,M[3][3];
 printf("Enter 9 elements of magic square(3*3 matrix) \n");
  for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
		scanf("%d",&M[i][j]);
 printf("Displaying magic square as (3*3)matrix\n");
  for(i=0;i<3;i++)
	 {
	  printf("\n");
		for(j=0;j<3;j++)
		  printf("%d\t", M[i][j]);
	 }
 val=calc(M);
  if(val==0)
	 printf("\nNot a magic square\n");
  if(val==1)
	 printf("\nA magic square\n");
 }
int calc(int A[3][3])
 {
  int sumr[3]={0,0,0};
  int sumc[3]={0,0,0};
  int i,j,ds1,ds2,flag;
  ds1=ds2=0;
  flag=0;
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
		{
		 sumr[i]+=A[i][j];
		 sumc[j]+=A[i][j];
		  if(i==j)
			 ds1+=A[i][j];
		  if((i+j)==2)
			 ds2+=A[i][j];
		}
  if((sumr[0]==sumr[1])&&(sumr[1]==sumr[2]))
	 if((sumc[0]==sumc[1])&&(sumc[1]==sumc[2]))
		if(ds1==ds2)
		 if((sumr[0]==sumc[0])&&(sumc[0]==ds2))
			 flag=1;
  return(flag);
  }