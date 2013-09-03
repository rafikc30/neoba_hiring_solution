#include<stdio.h>
void main()
{
	int s[10][10],i,j,tot=0,sum=0,flag,f,k,sum1=0;
	int a[]={1,2,3,4,5,6,7,8,9};
	printf("\nENTER THE NUMBERS IN SQUARE\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&s[i][j]);
	}
	}
	tot=s[0][0]+s[0][1]+s[0][2];
	for(i=0;i<3;i++)
	{
			flag=0;
			for(j=0;j<3;j++)
			{
				sum=sum+s[i][j];
			}
		if(sum==tot)
		{
			flag=1;
			sum=0;
		}
		break;
	}
	for(j=0;j<3;j++)
	{
			for(i=0;i<3;i++)
			{
				sum1=sum1+s[i][j];
			}
		if(sum1==tot)
		{
			flag=1;
			sum1=0;
		}
		break;
	}
	if(s[0][0]+s[1][1]+s[2][2]==s[0][2]+s[1][1]+s[2][0]==tot)
	{
		flag=1;
	}
	
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
		{
			f=0;
			for(k=0;k<9;k++)
			{
				if(s[i][j]==a[k])
				{
		           		f=1;
			   		a[k]=0;
			   		break;
				}
			}
			if(f==0)
			{
				flag=0;
				break;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",s[i][j]);
		}
	}
	if(flag==1)
	{
	printf("THE GIVEN SQUARE IS A MAGIC SQUARE\n");
	}
	else
	{
		printf("THE GIVEN SQUARE IS NOT A MAGIC SQUARE\n");
	}
}

