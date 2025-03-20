// 3. Given an array of 9 integer numbers (3 -3 1 5 7 0 8 9 6). Write a program that test if an integer number input by a user is exist in that array or not.

#include<stdio.h>

int main (void) {
    int num[9] = {3, -3, 2, 5, 7, 0, 8, 9, 6}; //initialize array
    int Find, size=9 ; //declare variable

    //prompt user a number to find 
    printf("Enter a number: ");
    scanf("%d", &Find);

    int Found = 0; //found is false

    for(int i=0; i<size; i++) {
        if(Find == num[i]) {
            Found = 1; //found will be true
        }
    }

    if(Found == 1) { //check if that number exist in array
        printf("The number %d exist in the array\n", Find);
    } else {
        printf("The number %d doesn't exist in the array\n", Find);
    }

    return 0;
}