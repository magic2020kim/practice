/*
Question: swap 2 variables with using 3rd variable
*/

#include<stdio.h>

int x,y; //2 variables, exp: x=3, y=2

int main(){
    //key in variable
    printf("Input 1st number:");
    scanf("%d", &x);
    printf("Input 2nd number:");
    scanf("%d", &y);
    printf("Variables before swap: %d & %d\n", x, y);

    x = x + y; //save sum up variable into 1st var: x = 3 + 2 = 5
    y = x - y; //minus 2nd variable to swap 1st value into 2nd var: y = 5 -2 = 3
    x = x - y; //minus swapped 2nd variable to swap 2nd value into 1st var: x = 5 - 3 = 2

    printf("Variables after swap: %d & %d\n", x, y); //print output

    return 0;
}