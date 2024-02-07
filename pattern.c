#include <stdio.h> 
int main() 
{ 
    int i,j,k,rows = 5; 
    // first loop is for printing the rows 
    for (i = 0; i < rows; i++) { 
        // loop for printing leading whitespaces 
        //for white spaces
        // for i=5, 5-0=5 , 5*2=10, 10-1=9, so j<9
        for (j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 
        // loop for printing * character 
        for (k = 0; k <= i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
//    return 0; 
}
