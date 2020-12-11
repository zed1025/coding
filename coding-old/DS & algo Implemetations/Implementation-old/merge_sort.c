//this is an implemantation of the mergeSort algorithm
//merge sort is a recursive algorithm

#include<stdio.h>
#define INFI 32768

void merge(int [], int , int , int );
void mergeSort(int [], int , int );

int main(){
  int num[6];
  int i;
  for(i=0; i<6; i++){
    scanf("%d", &num[i]);
  }

  mergeSort(num, 0, 5);

  for(i=0; i<6; i++){
    printf("%d ", num[i]);
  }
  printf("\n\n");
}

void merge(int A[], int p, int q, int r){
  int n1, n2, i, j, k;
  n1 = q+1;
  n2 = r-q;
  int L[n1+1], R[n2+1];
  //copyting the values of the two subarrays in temperoary arrays
  for(i=0; i<n1; i++){
    L[i] = A[p+i];
  }
  for(j=0; j<n2; j++){
    R[j] = A[q+j+1];
  }

  //declaring the sentinel cards
  L[n1] = INFI;
  R[n2] = INFI;
  i=0; j=0;
  for(k=p; k<=r; k++){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int A[], int p, int r){
  int q;
  if(p<r){
    q = (p+r)/2;
    //recursive call
    mergeSort(A, p, q);
    mergeSort(A, q+1, r);
    //merging
    merge(A, p, q, r);
  }
}
