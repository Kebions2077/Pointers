#include <stdio.h>
void shift(int *p1,int *p2){
    int c;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("\n[%i] [%i]", *p1,*p2);

}
int main (void){
    int a,b,*p1,*p2;
    printf("Enter Both Variables: A and B");
        scanf("%i %i", &a, &b);
        p1=&a;
        p2=&b;
        printf(" Before Switch: \n[%i], [%i]", a,b);
        printf("\nAfter Switch:");
        shift(p1,p2);
        return 0;
}