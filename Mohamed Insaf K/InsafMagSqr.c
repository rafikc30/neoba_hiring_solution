#include <stdio.h>
#include <conio.h>
void main(){
clrscr();

int matrix[3][3];
int i,j,sum=0,sum1=0,sum2=0,chk=1;
printf("Enter the magic square with return separating each elements\n");


 for(i=0;i<9;){
  scanf("%d",*(matrix+0)+i);
  if(*(*(matrix+0)+i)>=1&&* (*(matrix+0)+i)<=9)
  {
  chk=1;
	for(j=0;j<i;j++)
	{
	 if(*(*(matrix+0)+j)==*(*(matrix+0)+i) )
	   {
		 chk=2;
		 break;
	   }
	   else
		 chk=1;
	}

  }
  else
	chk=0;
  if(chk==0)
	printf("\nPlease Enter a number between 1 and 9\n");
  if(chk==1)
	i++;
  if(chk==2)
	printf("\nThe number you have entered already exists. Please try another number\n");
  }


printf("The magic sqaure you have entered is as follows\n\n");

 for(i=0;i<9;i++){
   printf("%d ",*(*(matrix+0)+i));
   if(i%3==2){
    printf("\n");
   }
  }

sum=0;sum1=0;sum2=0;chk=1;
  for(i=0;i<=2&&chk==1;i++){
	for(j=0,sum1=0,sum2=0;j<3;j++){
		sum1+=*(*(matrix+i)+j);
		sum2+=*(*(matrix+j)+i);
	}
	if(sum1!=sum2){
		chk=0;
	}
	sum=sum1;
 }
 for(sum1=0,sum2=0,i=0,j=2;i<3&&j>=0&&chk==1;i++,j--){
	sum1+=*(*(matrix+i)+i);
	sum2+=*(*(matrix+j)+i);

 }
 if(sum1!=sum2)
	chk==0;
 else
	chk==1;

if(chk==0)
	printf("\nThe square that you have entered is not a magic square\n");
else
	printf("\nThe magic square you have entered is a right magic square");
}