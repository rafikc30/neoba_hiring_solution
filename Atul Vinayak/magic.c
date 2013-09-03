#include<stdio.h>
//@atulvinayak su.atul.vi@gmail.com
int ismagic(int [][]);

int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);

	if(ismagic(a))
		printf("Its a magic square\n");
	else
		printf("Not a Magic square\n");
	return 0;
}

int ismagic(int sqr[][3])
{
	//returns 1 is the square is magic, 0 else
	int msum,i,j,t=0;
	msum=sqr[0][0]+sqr[0][1]+sqr[0][2];

	for(i=0;i<3;i++)
	{
		//add all rows
		for(t=0,j=0;j<3;j++)
			t+=sqr[i][j];
		if(t!=msum)
			return 0;
		
		//add all columns
		for(t=0,j=0;j<3;j++)
			t+=sqr[j][i];
		if(t!=msum) 
			return 0;
	}
	
	//diagonals check
	t=sqr[0][0]+sqr[1][1]+sqr[2][2];
	if(t!=msum) 
		return 0;
        t=sqr[0][2]+sqr[1][1]+sqr[2][0];
        if(t!=msum)
        	return 0;
	return 1;
}
