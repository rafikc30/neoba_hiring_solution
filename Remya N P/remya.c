#include<stdio.h>
int main()
{
 int a[3][3],b[6],k,m,i,j,x=0,y=0,flag;
 printf("enter the matrix :\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
 }
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
  x+=a[i][j];
 for(i=0;i<3;i++)
 for(j=2;j>=0;j--)
  y+=a[i][j];
 if(x==y)
 {
  for(i=0;i<3;i++)
  {
   b[i]=0;
   for(j=0;j<3;j++)
    b[i]+=a[i][j];
  }
  for(j=0;j<3;j++)
  for(k=3;k<6;k++)
  {
   b[k]=0;
   for(i=0;i<3;i++)
    b[k]+=a[i][j];
  }
  m=a[0][0]+a[1][1]+a[2][2];
  for(i=0;i<6;i++)
  {
   if(b[i]==m)
    flag=0;
   else
    {flag=1;break;}
  }
 }
 else
  flag=1;
 if(flag==0)
  printf("this is a magic matrix\n");
 else
 printf("this is not a magic matrix\n");
}
