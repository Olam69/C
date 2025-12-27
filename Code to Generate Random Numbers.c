// C program for generating a
// random number in a given range.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
// Generates and prints 'count' random
// numbers in range [lower, upper].
    void printRandoms(lower,upper,count)
    {
        int i;
        for (i = 0; i < count; i++) {
            int num = (rand() % (upper - lower + 1)) + lower;
            printf("%d ", num);
        }
    }
    // Driver code
    int lower,upper,count;
    printf("Print n random number(s) betweena given range; lower and upper\n");
    printf("Input n~");
    scanf("%d",&count);
    printf("Input lower~");
    scanf("%d",&lower);
    printf("Input upper~");
    scanf("%d",&upper);
//We use current time as seed for random generator
    srand(time(0));
    printf("\n\nPrint %d random number(s) between%d and %d\n\nAnswer:",count,lower,upper);
    printRandoms(lower,upper,count);
    printf("\n");



/*

_Fun fact_
printRandoms(lower,upper,count);
is exactly on the same line as
printf("%d ",num);!

After the both of them comes printf("\n");

*/


    return 0;
}