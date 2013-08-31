#include<iostream>
using namespace std;

int main()
{
int sum=15,rsum=0,d1sum=0,d2sum=0;
char ch;
int n=3;
int i,j=0;
int magic[n][n];
bool magicmatrix=true;
int row=2;
int col=3/2;
do{
    cout<<"   ******************";
	cout<<'\n'<<"enter the matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>magic[i][j];
        }
    }

if(magic[1][1]!=5)
{
    magicmatrix=false;
    goto exit;
}

for(i=0,j=2;i<3,j>=0;i++,j--)
        {
             d1sum+=magic[i][i];
             d2sum+=magic[i][j];
        }
if(d1sum&&d2sum!=sum)
        {
            magicmatrix=false;

        }


else{

        for(i=0;i<n;i++)
        {
            rsum=0;
            for(j=0;j<n;j++)
            {
                rsum+=magic[i][j];
            }
                if(rsum!=sum)
                {
                    magicmatrix=false;
                    break;
                }

        }
   }

  exit: cout<<'\n'<<magicmatrix<<'\n';


}while(true);

}
