// 4. Write a C program to ask a user for N scores then find the maximum and minimum value from that score array. The user will input the number of N scores (ex.: 5).

#include<stdio.h>
int main(void) {
    int size; //declare size of array 
    do {
        printf("Enter size of array: ");
        scanf("%d", &size);
    } while(size<=0);

    float score[size];//initialize array

    printf("Enter score of student: \n");
    for(int i=0; i<size; i++) { //prompt user for score for each elements
        printf("score[%d]: ", i);
        scanf("%f ", &score[i]);
    }

    float min, max; //declare max and min
    min = max = score[0];

    for(int i=1; i<size; i++) {
        if(score[i]>max) { //find max
            max = score[i];
        }

        if(score[i]<min) { //find min
            min = score[i];
        }
    }

    printf("Maximum score: %.2f\n", max);
    printf("Minimum score: %.2f\n", min);

    return 0; //code success
}