#include<stdio.h>
int array[3][3],sumarr[7],num[9];
  main()
{
	int i,j,a=0,flag=1;
	printf("\nEnter the matrix");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("\n\n\tROW %d Coloumn %d : ",i+1,j+1);
			scanf("%d",&array[i][j]);
								       //Receive the Matrix
			if(!(array[i][j]>=1&&array[i][j]<=9))
			flag=0;                                        //Check if the number s b/w 1 and 9

			else if(num[array[i][j]-1]==0)                 //To ensure that no number is repeated since all numbers fro 1 to 9 must be there
			num[array[i][j]-1]=1;

			else
			flag=0;                                        //A number repeated so not a magc matrix
		}
	if(flag==1)                                                    //Check only if entered numbers are as specified
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		sumarr[a]=sumarr[a]+array[i][j];
		sumarr[a+3]=sumarr[a+3]+array[i][j];

		if(i==j)
		sumarr[6]=sumarr[6]+array[i][i];

		if(i==2-j)
		sumarr[7]=sumarr[7]+array[i][j];
		}
		a++;
	}
	if (flag==1)                                                     //Check only if entered numbers are as specified
	for(i=1;i<8;i++)
		if(!(sumarr[i]==sumarr[i-1]))
		break;

	if(i==7)
	printf("\n\n\tTRUE");                                           //MAGIC MATRIX

	else
	printf("\n\n\tFALSE");                                         //NOT A MAGIC MATRIX

}
