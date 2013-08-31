#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int magic[3][3],i,j,sr1=0,sr2=0, sr3=0,sc1=0,sc2=0,sc3=0,sd1, sd2;
	printf("Enter your magic square\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&magic[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	if((magic[i][j]<=0)||(magic[i][j]>9))
	{
	printf("\nYou must use integer between 0 and 10");
	getch();
	return (0);
	}
	}
	for(j=0;j<3;j++)
	{
	sr1+=magic[0][j];
	sr2+=magic[1][j];
	sr3+=magic[2][j];
	sc1+=magic[j][0];
	sc2+=magic[j][1];
	sc3+=magic[j][2];
	}
	sd1=magic[0][0]+magic[1][1]+magic[2][2];
	sd2=magic[0][2]+magic[1][1]+magic[2][0];
	if((sr1==sr2)&&(sr2==sr3)&&(sr3==sc1)&&(sc1==sc2)&&(sc2==sc3)&& (sc3==sd1)&&(sd1==sd2))
	printf("\nThis is a magic square");
	else 
	printf("\nThis is not a magic square");
	getch();
	return(0);
}
	