//magic sqare
#include<stdio.h>
#include<conio.h>
main()
{
      int a[3][3],i,j,check,row1=0,row2=0,row3=0,column1=0,column2=0,column3=0,diag1=0,diag2=0;
      for(i=0;i<3;i++)
      {
              for(j=0;j<3;j++)
              {
                                      printf("enter the element (%d,%d)\n",i+1,j+1);
                                      scanf("%d",&check);                                               //reading the element
                                      if(check<=9&&check>=0)                                            //checking whether 0 to 9   
                                      a[i][j]=check;
                                      else                                                              
                                      {                                                                 
                                          printf("you have to enter a digit between 0 and 9\n");        //error message
                                          if(j!=0)
                                          j--;                                                          //steps to re enter the the element       
                                          else
                                          {
                                              i--;
                                              j=2;
                                          }    
                                      }
              }
      }
      for(i=0;i<3;i++)
      {
                      row1+=a[0][i];
                      row2+=a[1][i];
                      row3+=a[2][i];
                      column1+=a[i][0];                                                                 //steps adding and rows and columns and one daigonal elements
                      column2+=a[i][1];
                      column3+=a[i][2];
                      diag1+=a[1][1];
      }
      diag2=a[0][2]+a[1][1]+a[2][0];                                                                    //adding yhe other diagonal elements
      if((row2==row1) && (row3==row1) && (column1==row1) && (column2=row1) && (column3==row1) && (diag1==row1) && (diag2==row1))            //checking the condition
                                                     printf("magic square!! :)\n");
      else
                                                     printf("not magic sqare :(\n");
      getch();
}                                              
