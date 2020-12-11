#include<stdio.h>

int main(){
  int aRow, aCol, bRow, bCol, cRow, cCol;
  int A[100][100], B[100][100], C[100][100];
  int i, j, k;
  printf("Enter row and column of A; ");
  scanf("%d %d", &aRow, &aCol);
  printf("Enter row and columns of B: ");
  scanf("%d %d", &bRow, &bCol);

  //printf("aRow = %d \naCol = %d \nbRow = %d \nbCol = %d \n", aRow, aCol, bRow, bCol);

  //reading the first matrix
  for(i=0; i<aRow; i++){
    for(j=0; j<aCol; j++){
      scanf("%d", &A[i][j]);
    }
  }
/*
  for(i=0; i<aRow; i++){
    for(j=0; j<aCol; j++){
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
*/
  //reading the second matrix
  for(i=0; i<bRow; i++){
    for(j=0; j<bCol; j++){
      scanf("%d", &B[i][j]);
    }
  }
/*
  for(i=0; i<bRow; i++){
    for(j=0; j<bCol; j++){
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
*/

  //calculating the product
  cRow=aRow;
  cCol=bCol;
  for(i=0; i<cRow; i++){
    for(j=0; j<cCol; j++){
      C[i][j] = 0;
      for(k=0; k<cCol; k++){
        C[i][j] += A[i][k]*B[k][j];
      }
    }
  }

  for(i=0; i<cRow; i++){
    for(j=0; j<cCol; j++){
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

}
