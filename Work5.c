// 5. Write a C program to ask a user for N scores then find the average of those scores and show the scores that are greater than the average. The user will input the number of N scores

#include<stdio.h>
int main(void) {
    int size; //declare size of array 
    do {
        printf("Enter size of array: ");
        scanf("%d", &size);
    } while(size<=0);

    float score[size], average=0;//initialize array

    printf("Enter score of student: \n");
    for(int i=0; i<size; i++) { //prompt user for score for each elements
        printf("score[%d]: ", i);
        scanf("%f", &score[i]);
        average+=score[i]; //add score to total
    }

    average /=size; //get the average of all score combine
    
    printf("Our average is %.2f\n", average);
    printf("Scores that are higher than average: \n");
    //find score that is higher than average
    for(int i=0; i<size;i++) {
        if(score[i]>average) {
            printf("score[%d]: %.2f\n" , i, score[i]);
        }
    }

    return 0; //code success
}