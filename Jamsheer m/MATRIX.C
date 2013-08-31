#include<stdio.h>
#include<conio.h>

void main()
{
 int matrix[3][3] , i , j , sumd , sumc , sumr , flag=0;
 clrscr();

 printf("Enter matrix\n");

 for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
	  {
	   scanf("%d",&matrix[i][j]);
	  }
	  printf("\n");
     }

 printf("Entered matrix\n");

 for(i=0;i<3;i++)
    {
    printf("\n");

    for(j=0;j<3;j++)
	{
	printf("%d\t",matrix[i][j]);
	}
    }

/*checking diagonol elements*/

 sumd=0;
 for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {
	if(i==j)
	sumd=sumd+matrix[i][j];
       }
    }

/*checking rows*/

 for(i=0;i<3;i++)
    {
      sumr=0;

      for(j=0;j<3;j++)
       {
	sumr=sumr+matrix[i][j];
       }

      if(sumd==sumr)
	flag=1;
      else
       {
	flag=0;
	break;
       }
     }

/*checking columns*/

 for(i=0;i<3;i++)
   {
     sumc=0;

     for(j=0;j<3;j++)
      {
       sumc=sumc+matrix[j][i];
      }

     if(sumd==sumc)
	flag=1;
     else
      {
	flag=0;
	break;
      }
   }



 if(flag==1)
     printf("\nIt is a Magic square");
 else
     printf("\nNot a  magic square");

getch();

}