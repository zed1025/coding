#include<stdio.h>
#include<stdlib.h>

extern void bubbleSort(int [], int );
extern int binarySearch();

int main(){
    int n, *x, num, index;
    printf("Enter the length of the list to be sorted: ");
    scanf("%d", &n);

    x = (int *)malloc(n*sizeof(n));

    //reading the input
    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
    }

    //sorting the list
    bubbleSort(x, n);

    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    index = binarySearch(num, x, 0, n);
    printf("\n\n%d\n", x[index]);
}
