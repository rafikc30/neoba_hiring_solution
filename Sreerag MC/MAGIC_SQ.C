#include<stdio.h>
#include<conio.h>
void main()
{
int magic[3][3],i,j,k,s1=0,s2=0,s3=0,s4=0,b=0;
printf("\nEnter the elements of the matrix\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d", &magic[i][j]);
for(i=0;i<3;i++)
{for(j=0;j<3;j++)

if((magic[i][j]<=0)||(magic[i][j]>9))
{
printf("\nEnter numbers between 0 and 10\n");
getch();
}
}

for(i=0;i<3;++i)
{ s1=0;
for(j=0;j<3;j++)
s1+=magic[j][i];
s2=0;
for(k=0;k<3;++k)
{s2+=magic[i][k];
if(i==k)
s3+=magic[i][k];
if((i+k)==2)
s4+=magic[i][k]; }

if(s1==s2)
b++;       }

if((b==3)&&(s2==s3)&&(s2==s4))
{printf("\nThe matrix is a magic square\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",magic[i][j]);
printf("\n");
}
}
else
printf("\nThe matrix is not a magic square\n");
getch();
clrscr();
}
