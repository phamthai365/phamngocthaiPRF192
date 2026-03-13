#include <stdio.h>

int main(){
    int n, i;
    int a[100];

    printf("Nhap n: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }

    printf("Mang dao nguoc: ");
    for(i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }

    return 0;
}