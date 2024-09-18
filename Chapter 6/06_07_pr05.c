#include<stdio.h>

int main(){
    int i = 345;
    int *ptr;
    

    ptr = &i;
  

    printf("The value of i is %d", *ptr);
    return 0;
}