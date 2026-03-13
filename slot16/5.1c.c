#include <stdio.h>

void rotate(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main(){
    int a, b, c;

    printf("Nhap a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    rotate(&a, &b, &c);

    printf("Sau khi doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}