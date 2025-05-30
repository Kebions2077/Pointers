#include <stdio.h>
int main (void){
    int n, *ptr;
    n=10;
    ptr=&n;
    *ptr *= 2;
    printf("New Value:%i", *ptr);
    return 0;

}