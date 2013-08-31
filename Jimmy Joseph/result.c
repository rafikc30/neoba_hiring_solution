#include<stdio.h>

int magic()
{
int a[3][3],x,i=0,j,f=1,sum=0;
for(i=0;i<3;i++)
   for(j=0;j<3;j++) {
        scanf("%d",&x);
        if(x>0&&x<10){
            a[i][j]=x;
            sum+=a[i][j];}
        else
            f=0;
    }
if(f==0&&sum!=45)
    return f;
sum=a[0][0]+a[0][1]+a[0][2];
if(sum==(a[0][0]+a[1][0]+a[2][0])&&sum==(a[2][0]+a[2][1]+a[2][2])&&sum==(a[0][2]+a[1][2]+a[2][2]))
    return f;
else
    return 0;
}

main(){
int y;
y=magic();
printf("%d",y);
}
