
//Author Jithin Kumar.P
#include<stdio.h>

#define TRUE  1
#define FALSE 0

#define ROWMAX 3
#define COLMAX 3

int IsMagicSquare( int nArray_i[ROWMAX][COLMAX], int nRow_i, int nColumn_i )
 {

  int nRowIndex;
  int nColumnIndex;

  int nRowSum =0;
  int nColSum =0;
  int nDiaSum =0;

  int nPrevRowSum =0;
  int nPrevColSum =0;

  int nMajDiaSum = 0;
  int nMinDiaSum = 0;


  for( nRowIndex = 0; nRowIndex < nRow_i; nRowIndex++ )
   {
    
    if( nPrevRowSum != nRowSum )
      {
        return FALSE;
      }
     nPrevRowSum =nRowSum;
     nRowSum =0;
     for( nColumnIndex = 0; nColumnIndex < nColumn_i; nColumnIndex++ )
      {
        nRowSum += nArray_i[nRowIndex][nColumnIndex];
        if( 0 == nRowIndex )
         {
           nPrevRowSum =nRowSum;
         }

        if( nColumnIndex == nRowIndex )
         {
           nMajDiaSum += nArray_i[nRowIndex][nColumnIndex];
         }
        if( (ROWMAX - 1) == (nColumnIndex + nRowIndex) )
         {
           nMinDiaSum += nArray_i[nRowIndex][nColumnIndex];
         }
      }
   
   }

  for( nColumnIndex = 0; nColumnIndex < nColumn_i; nColumnIndex++ )
   {
     if( nPrevColSum != nColSum)
      {
        return FALSE;
      }
     nPrevColSum = nColSum;
     nColSum = 0;
     for( nRowIndex = 0; nRowIndex < nRow_i; nRowIndex++ )
      {
        nColSum += nArray_i[nRowIndex][nColumnIndex];
        if( 0 == nColumnIndex )
         {
           nPrevColSum = nColSum;
         }
      }
   }
  if( (nRowSum == nColSum) &&( nMinDiaSum == nMajDiaSum ) &&( nColSum == nMinDiaSum))
   {
     return TRUE;
   }
   
   return FALSE;
 }

int main()
 {
  int nArray[ROWMAX][COLMAX];
  int nRowIndex;
  int nColumnIndex;

  printf("\n\t\tEnter a 3 X 3 matrix \n");

  for( nRowIndex = 0; nRowIndex < ROWMAX; nRowIndex++ )
   {
     printf("\n\t\tEnter elements in row(%d)\t",(nRowIndex+1));
     for( nColumnIndex = 0; nColumnIndex < COLMAX; nColumnIndex++ )
      {
        scanf("%d", &nArray[nRowIndex][nColumnIndex]);
      }
   }

  if( TRUE == IsMagicSquare( nArray, ROWMAX, COLMAX) )
   {
    printf("\n\t\tMagic square..:)\n");
   }
  else
   {
    printf("\n\t\tNot a magic square ..:(\n");
   }
  return (0);
 }
