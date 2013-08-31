/*A c language program to check whether a  n odered matrix is a magic square or not.
    Coded by Jishnu V , s3 CSE ,College of engineering Trivandrum */

#include<stdio.h>
#include<process.h>

 void main()

  {
     int a[4][4],i,j,sum1=0,sum2=0,sum3=0,flag,n,m;

       printf("Enter the order of the matrix:\n");

        scanf("%d %d", &m, &n);

       if(m!=n)
       {

         printf("Invalid order\n");
         exit(0);

       }
      printf("Enter the elements of the matrix in raw wise:\n");

        for(i=0; i<m; i++)

           {
 
             for(j=0; j<n; j++)

               {

                scanf("%d",&a[i][j]);

               }

            }

         for(i=0; i<m; i++)

            {
                    sum1=sum1+a[i][i];
            }


      printf("The entered matrix is \n");

         for(i=0; i<m; i++)

           {

             for(j=0; j<n; j++)

            {
                printf("%d\t",a[i][j]);

            }

            printf("\n");
         }

         for(i=0; i<m; i++)

           {

             for(j=0; j<n; j++)

                  {

                    sum2=sum2+a[i][j];   //Checking the sum of the each row.

                  }

          if(sum1==sum2)
             flag=1;
          else
            {
                flag=0;
                break;

            }

         }

         for(i=0; i<m; i++)

           {

            sum3=0;

            for(j=0; j<n; j++)

             {
                sum3=sum3+a[j][i]; //Checking the sum of the each coloumn
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

