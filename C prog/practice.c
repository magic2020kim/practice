#include <stdio.h>
#include <stdlib.h>

int i, j;

int main() {
  for (i=1;i<=6;i++){
    for(j=1; j<=i; j++){
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
};