/*A c language program to check whether a entered 3*3 matrix is a magic square or not.
    Coded by Jishnu V , s3 CSE ,College of engineering Trivandrum */

#include<stdio.h>
 void main()

  {
     int a[4][4],i,j,sum1=15,sum2=0,sum3=0,flag; // The sum of the 3*3 squre mqtrix is alwys 15(when n=3,the sum is (n(n^2+1))/2.)

      printf("Enter the elements of the matrix in raw wise:\n");

        for(i=0; i<3; i++)

           {

             for(j=0; j<3; j++)

               {

                scanf("%d",&a[i][j]);

               }

            }

      printf("The entered matrix is: \n");

         for(i=0; i<3; i++)

           {

        for(j=0; j<3; j++)

            {
                printf("%d\t",a[i][j]);

            }

            printf("\n");
         }

         for(i=0; i<3; i++)

           {

             for(j=0;j<3;j++)

                  {

                    sum2=sum2+a[i][j]; //Checking the sum of each row

                  }

          if(sum1==sum2)
             flag=1;
          else
            {
                flag=0;
                break;

            }

         }

         for(i=0;i<3;i++)

           {

            sum3=0;

            for(j=0; j<3; j++)

             {
                sum3=sum3+a[j][i]; //Checking the sum of each coloumn
             }

            if(sum1==sum3)
                flag=1;
            else

            {
                flag=0;
                break;
            }
        }


           if(flag==1)

             printf("\nThe entered matrix is magic square\n");

           else

              printf("\nThe entered matrix is not a magic square \n");
  
  }

