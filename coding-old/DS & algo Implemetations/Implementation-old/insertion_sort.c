/*
    (C)Amit Kumar, 18-March-2016
    Description: This is a sorting program which sorts a given array of numbers in ascenign order.
*/

#include<stdio.h>
int main(){
    int num[5], i, j, key;
    int counter1, counter2;;
    
    for(counter1=0; counter1<5; counter1++){
        printf("Enter the %d numbers: ", counter1);
        scanf("%d", &num[counter1]);
    }
    
    for(j=1; j<5; j++){
        key=num[j];
        i=j-1;
        while(i>=0 && num[i]>key){
            num[i+1]=num[i];
            i=i-1;
            num[i+1]=key;
        }
    }
    printf("The sorted sequence is: \n");
    for(counter2=0; counter2<5; counter2++){
        printf("%d \n", num[counter2]);
    }
    
    
}