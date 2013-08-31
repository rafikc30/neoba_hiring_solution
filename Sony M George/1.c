#include<stdio.h>
int main()
{

int k,temp,i,j,flag=0,r[3]={0},c[3]={0},d[3]={0},a[4][4];

printf("Enter a 3*3 Matrix\n");          //reading a 3*3 matrix
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);

if(a[i][j]<1 || a[i][j]>9)          //checks if numbers not between 1 and 9
flag=1;

}
}


k=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

if(i==j)                            //check for primary diagonal
d[0]+=a[i][j];

if(i+j==2)                          //check for secondary diagonal
d[1]+=a[i][j];

r[k]+=a[i][j];                     //adds contents of a particular row
c[k]+=a[j][i];                     //adds contents of a particular column
}
k++;
}

temp=r[0];
d[2]=r[0];                        //d[2] is given r[o] to simplify check in the next for loop
for(k=0;k<3;k++)
{
if(r[k]!=temp || c[k] !=temp || d[k]!=temp)
{
flag=1;
break;
}
}

if(flag==1)
printf("The entered matrix is not a 3*3 Magic matrix\n");

else
printf("The entered matrix is a 3*3 Magic Matrix\n");

if(flag==1)
return 0;
else 
return 1;


}
