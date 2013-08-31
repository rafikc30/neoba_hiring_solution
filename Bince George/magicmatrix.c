#include<stdio.h>
void main()
{
	typedef enum {false,true} boolean;   
	boolean value; 
	int a[3][3];
	int i,j;
	int sum,sum1,sum2;
	printf("Enter matrix : ");
	for(i=0;i<3;i++)
    	{
    		for(j=0;j<3;j++)
    			scanf("%d",&a[i][j]);
    	}
	printf("Entered matrix is : nn");
	for(i=0;i<3;i++)
	{
   		 printf("\n");
        	for(j=0;j<3;j++)
        	{
        		printf("\t%d",a[i][j]);
        	}
	}

	//------for diagondal elements---------
	sum=0;
	for(i=0;i<3;i++)
    		for(j=0;j<3;j++)
    		{
    			if(i==j)
    			sum=sum+a[i][j];
    		}
	//-------------for rows--------------

	for(i=0;i<3;i++)
	{
    		sum1=0;
    		{
    		for(j=0;j<3;j++)
    			sum1=sum1+a[i][j];
    		}
    		if(sum==sum1)
        		value=true;
    		else
        	{
        		value=false;
        		break;
        	}
	}
	//-------------for colomns----------------
	for(i=0;i<3;i++)
	{
    		sum2=0;
    		for(j=0;j<3;j++)
    		{
    			sum2=sum2+a[j][i];
    		}
    		if(sum==sum2)
        		value=true;
    		else
        	{
        		value=false;
        		break;
        	}
	}
	//----------------------------------------
	if(value==true)
    		printf("\nGiven matrix is a Magic square matrix");
	else
    		printf("\nGiven matrix is not a magic square matrix");
}
