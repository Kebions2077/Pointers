#include <stdio.h>
int main (void){
    int n, *pa;
    printf("Enter a integrer for allocate in the variable n:");
        scanf("%i", &n);
        pa=&n;
        printf("The pointer is allocating the variable n that is %i", *pa);
        return 0;
}