#include<stdio.h>

int main() {
    int a[3][3], i, j, k, sum, flag = 1, nflag = 1, tmp = 0;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //ENTER THE NUMBERS IN SQUARE
    printf("Enter the numbers in square: ");
    for(i=0,k=0;i<3;++i) {
        for(j=0;j<3;++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    //CHECKING SUM IN EACH ROW
    sum = a[0][0] + a[0][1] + a[0][2];
    for(i=0;i<3;++i) {
        tmp = 0;
        for(j=0;j<3;++j) {
            tmp += a[i][j];
        }
        if(tmp != sum) {
            flag = 0;
            break;
        }
    }
    
    //CHECKING SUM IN EACH COLUMN
    if(flag) {
        for(i=0;i<3;++i) {
            tmp = 0;
            for(j=0;j<3;++j) {
                tmp += a[j][i];
            }
            if(tmp != sum) {
                flag = 0;
                break;
            }
        }
    }
    
    //CHECKING SUM IN DIAGONALS
    if(flag) {
        if(sum != a[0][0] + a[1][1] + a[2][2]) {
            flag = 0;
        } else if(sum != a[2][0] + a[1][1] + a[0][2]) {
            flag = 0;
        }
    }
    
    //CHECKING FOR REPEATS
    if(flag) {
        for(i=0; i<3; ++i) {
            for(j=0; j<3; ++j) {
                nflag = 1;
                for(k=0; k<9; ++k) {
                    if(a[i][j] == num[k]) {
                        num[k] = 0;
                        nflag = 0;
                        break;
                    }
                }
                if(nflag) {
                   flag = 0;
                   break;
                }
            }
        }
    }
    
    if(flag) {
        printf("The given square is a normal magic square.\n");
    } else {
        printf("The given square is NOT a normal magic square.\n");
    }
    return flag;
}

