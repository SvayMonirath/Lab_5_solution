// 1. Create an array that store 10 integer numbers (2 4 6 8 10 12 14 16 18 20). Then display those array elements on screen.

#include<stdio.h>
int main(void) {
    int num[10];//initialize array
  
    for(int i=0; i<10; i++) {  //store user input in array
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }

    for(int i=0; i<10; i++) { //print output of array 
        printf("%d ", num[i]);
    }

    return 0; //code success
}