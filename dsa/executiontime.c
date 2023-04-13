#include <stdio.h>
#include <time.h>

int main() {
clock_t start, end;
/* Store start time here */
start = clock();
/* put the main body of your program here */
printf("Enter any character\n");
getchar();
/* program logic ends here */
end = clock();
 /*Get the time taken by program to execute in seconds */
double duration = ((double)end - start)/CLOCKS_PER_SEC;

printf("Time taken to execute in seconds : %f", duration);
 return 0;
}