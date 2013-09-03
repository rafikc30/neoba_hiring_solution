#include<stdio.h>
#include<stdlib.h>

void matrixinput();                                   //Function to read matrix. 
void matrixprint();                                    /*Function to print the matrix entered*/
void maindiagonalsum();                               /*Functions to find the sum and check for equality*/
int secdiagonalsum();                                 
int rowsum();                                         
int columnsum();
int printresult();                                    //Function to print the result.                                      

int A[3][3],suma,sumb,flag,msquare=1;
char choice;

void main()
	{
		matrixinput();                        /*Reads the matrix*/

                matrixprint();                        
		
                maindiagonalsum();                    /*Finds main diagonal sum*/

		flag=secdiagonalsum();                /*Find second diagonal sum,checks for equality and returns a boolean*/
    
		printresult();                        

		flag=rowsum();                        /*Find row sum,checks for equality and returns a boolean*/

		printresult();

		flag=columnsum();                    /*Find column sum,checks for equality and returns a boolean*/

		printresult();
			 
	}

void matrixinput()
	{
		int i,j,k,l,counter=0,n=0;
		printf("Please enter the elements of the matrix::\n");
		for(i=0;i<3;i++)
                	{
                        	for(j=0;j<3;j++)
					{
			  			scanf("%d",&A[i][j]);
						label:if(counter!=0)
							{
								for(k=0;n<counter;k++)                       /*for loop to check whether the value has already been entered*/       
									{
						  				for(l=0;(l<3)&&(n<counter);l++,n++)
						  					{
												while(A[i][j]==A[k][l])
													{
														printf("\nPlease enter a different value(similar values cannot be entered)..\n");
														scanf("%d",&A[i][j]);
													}
						  					}	
									}
									n=0;
							}
					
						while((A[i][j]<1)||(A[i][j]>9))       /*To limit the values between 1 and 9*/
							{
								printf("\nPlease enter a value between 0 and 10\n\nOR\n\nEnter 100 to exit the application\n");
								scanf("%d",&A[i][j]);
								if(A[i][j]==100)
									{
										printf("\nExiting the application...\n");
										exit(0);
									}
								goto label;                                  /*goes to line    to check whethr the value has already been entered*/
							}
						counter++;
                        		}
                   	}                             
		
	}
void matrixprint()
	{
		int i,j;
		printf("The matrix entered is::\n");
		for(i=0;i<3;i++)
                        {
				for(j=0;j<3;j++)
				printf("%d\t",A[i][j]);
				printf("\n");
			}
		printf("\n");
	}

			
 
void maindiagonalsum()
        {
		int i,j;
		suma=0;
		for(i=0,j=0;i<3;i++,j++)
		suma+=A[i][j];
		       
        }	
int secdiagonalsum()
        {
		int i,j;
		sumb=0;
		for(i=2,j=0;j<3;i--,j++)
		sumb+=A[i][j];
		if(sumb!=suma)
		return 1;
		else
		return 0;
		
	}

int rowsum()
	{
		int i,j;
		for(i=0;i<3;i++)
		 {	
			sumb=0;
			for(j=0;j<3;j++)
			sumb+=A[i][j];
			if(sumb!=suma)
			return 1;
		 }
		return 0;
	}
int columnsum()
	{
		int i,j;
		for(i=0;i<3;i++)
		 {	
			sumb=0;
			for(j=0;j<3;j++)
			sumb=sumb+A[j][i];
			if(sumb!=suma)
			return 1;
		 }
		msquare=0;
		return 0;
	}
int printresult()
	{
		if(flag)
		{
			printf("\n\tThe matrix you have entered is not a magic square.\n");
		        printf("\n\tDo you wish to continue(y/n)::");
			scanf(" %c",&choice);
			if(choice=='y')
			{
				msquare=1;
				main();
			}
			else 
		        exit(0);
		}
		else
		{
			if((flag==0)&&(msquare==0))
			{
				printf("\n\tThe matrix you have entered is a magic square!!\n");
		        	printf("\n\tDo you wish to continue(y/n)::");
				scanf(" %c",&choice);
				if(choice=='y')
				{
					msquare=1;
					main();
				}
				else 
		        	exit(0);
			}
			else
			return 0;
		}
	}	
				
			

		
		
						
			 
			
		
			
			   