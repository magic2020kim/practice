/*
Question: print out number in following pattern:
1
22
333
4444
55555
*/
#include <stdio.h>
#include <stdlib.h>

int i, j;

int main() {
  for (i=1;i<6;i++){ //print number 1 -> 5
    for(j=1; j<=i; j++){ // loop repetative with respective num: 1 = loop 1 time, 2 = loop 2 time
      printf("%d", i); //print number
    }
    printf("\n"); //print next row
  }
  return 0; //exit code
};