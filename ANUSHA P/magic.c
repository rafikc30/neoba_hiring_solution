#include<stdio.h>
void main()
{
	int size,a[3][3];
	int i,j=0;
	int sum,sum1,sum2;
	int flag=0;
	printf("Enter Matrix:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	}

	printf("Entered Matrix is:\n\n");
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)
	{
	printf("\t%d",a[i][j]);
	}
	}
//------------------------------
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	if(a[i][j]>9||a[i][j]<1)
	flag=0;
	else
	{
	flag=1;
	break;
	}
//-----for diagonal elements-----
	sum=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	if(i==j)
	sum=sum+a[i][j];
	}

//------for rows---------
	for(i=0;i<3;i++)
	{
	sum1=0;
	for(j=0;j<3;j++)
	sum1=sum1+a[i][j];
	if(sum==sum1)
flag=1;
else
{
flag=0;
break;
}
}
//-----for columns----------
for(i=0;i<3;i++)
{
sum2=0;
for(j=0;j<3;j++)
{
sum2=sum2+a[j][i];
}
if(sum==sum2)
flag=1;
else
{
flag=0;
break;
}
}
if(flag==1)
printf("\n\n\t Its a Magic square.\n\n");
else
printf("\n\n\t Not a Magic square.\n\n");
//-----
}

