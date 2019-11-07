#include <stdio.h>
#include <stdlib.h>
void cambio(int *x, int *y);

int main(){
    int a;
    int b;
    printf("Digite el numero a\n");
    scanf("%d",&a);
    printf("Digite el numero b\n");
    scanf("%d",&b);
    cambio(&a,&b);

    printf("a = %d\n", a);
    printf("b =  %d\n", b);


    return 0;
}
void cambio(int *x, int *y){
    int z;

    z=*x;
    *x=*y;
    *y=z;
}
