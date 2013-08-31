#include<stdio.h>
#define TRUE 1;
#define FALSE 0;

int main()
{
	int i,j,a[3][3];
	system("clear");
	printf("enter a 3 by 3 matrix here :\n\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);

	printf("matrix is :\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("\t %d",a[i][j]);
		printf("\n");
	}
	if(Magic_Matrix(a))
		printf("\n\n\tand it is a Normal Magic Square matrix \n\n");
	else
		printf("\n\n\tand it is not a Normal Magic Square matrix \n\n");
	return 0;
}


int Magic_Matrix(int a[3][3])
{
	int i,j,l,m,ColS=0,RowS=0,DiaS1=0,DiaS2=0,count=0,k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			k=k+a[i][j];
			for(l=0;l<3;l++)
			{
				for(m=0;m<3;m++)
					if(a[i][j]==a[l][m])count=count++;
			}if(count!=1)return FALSE;count=0;
		}
	}

	if(k!=45) return FALSE;

	for(i=0,j=0;i<3,j<3;i++,j++)
		DiaS1=DiaS1+a[i][j];

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			RowS=RowS+a[i][j];
		if(RowS!=DiaS1)return FALSE;
		RowS=0;
	}

	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
			ColS=ColS+a[i][j];
		if(ColS!=DiaS1) return FALSE;
		ColS=0;
	}

	for(i=0,j=2;j>-1,i<3;i++,j--)
		DiaS2=DiaS2+a[i][j];
	if(DiaS2!=DiaS1) return FALSE;

return TRUE;
}

