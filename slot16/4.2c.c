#include <stdio.h>

int main(){
    int n, i;
    int a[100];
    int *p = a;

    printf("Nhap n: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d", p + i);
    }

    printf("Mang dao nguoc: ");
    for(i = n-1; i >= 0; i--){
        printf("%d ", *(p + i));
    }

    return 0;
}