// 2. Store n names in an array and display on screen. Ask a user for the number of names then ask for each name.

#include<stdio.h>
int main(void) {
    int size;//declare variables

    do{ // prompt user for size of array (with condition)
        printf("Enter size of array: ");
        scanf("%d", &size);
    } while(size<=0);

     getchar(); // after we press enter we create '\n' in the buffer, so getchar() handles that

    char name[size][20]; //initialize a 2d array instead of pointer

    for(int i=0; i<size; i++) { //prompt user for name and store in all index of array
        printf("Enter a name %d: ", i+1); 
        fgets(name[i], 20, stdin); //using fgets allow us to write names with spaces "svay monirath"
        for(int j=0; j<20; j++) {
            if(name[i][j] == '\n') { // remember we always convert \n ot Null when using fgets
                name[i][j] = '\0'
                break; //after replace '\n' we break out of checking 
            }
        }
    }

    //printing output
    printf("\nNames:\n");
    for(int i=0; i<size; i++) {
        printf("%s\n", name[i]);
    }

    return 0; //code success
}