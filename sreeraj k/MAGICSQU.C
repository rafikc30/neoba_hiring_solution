//CREATED BY SREERAJ K
//BY SIMPLY CHANGING THE VALUE OF SYMBOLIC CONSTANTS(MAT AND SUM) IT IS POSSIBLE TO USE SAME CODE FOR HIGHER ORDER MAGIC SQUARES
#include<stdio.h>
#define MAT 3
#define SUM 15
void main()
{
	int mag[MAT][MAT],flag=0,sum1=0,sum2=0,i,j,k;
// i,j,k are variables used for array manipulations
//sum1,sum2 sum of raws,columns,diagonal elements
	for(i=0;i<MAT;i++)
		for(j=0;j<MAT;j++)
			scanf("%d",&mag[i][j]);         //reading data
	for(i=0;i<MAT;i++)
	{
		sum1=0;sum2=0;
		for(j=0;j<MAT;j++)
		{
			sum1+=mag[i][j];
			sum2+=mag[j][i];
		}
		if(sum1!=SUM||sum2!=SUM)
		{
		flag=1;
		goto exit;
		}
	}
	sum1=0;sum2=0;
	for(i=0;i<MAT;i++)
		{
		sum1+=mag[i][i];
		sum2+=mag[i][MAT-1-i];
	}
	if(sum1!=SUM||sum2!=SUM)
	{
		flag=1;
		goto exit;
	}
	for(i=1;i<=(MAT*MAT);i++)
	{
		flag=0;
		for(j=0;j<MAT;j++)
			for(k=0;k<MAT;k++)
				if(mag[j][k]==i&&flag==0)
					flag=2;
				else if(mag[j][k]==i&&flag==2)
				{
					flag=1;
					goto exit;
				}
	}
	exit:
	if(flag==1)
		printf("NOT A MAGIC SQUARE ");
	else
		printf("MAGIC SQUARE");
}