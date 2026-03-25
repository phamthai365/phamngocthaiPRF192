#include <stdio.h>

int main() {
    int n;
    int a[100];

    FILE *fp = fopen("baitap2.txt", "w");
    if (fp == NULL) {
        printf("Error!");
        return 0;
    }

    printf("Nhap vao n: ");
    scanf("%d", &n);
    fprintf(fp, "%d\n", n);

    printf("Nhap vao tung phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        fprintf(fp, "%d\t", a[i]);
    }
    fclose(fp);

    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) {
        printf("Error!");
        return 0;
    }

    printf("\nNoi dung cua file:\n");
    int count;
    if (fscanf(fp, "%d", &count) != EOF) {
        printf("Input n: %d\n", count);
        
        int value;
        printf("Output array: ");
        for (int i = 0; i < count; i++) {
            if (fscanf(fp, "%d", &value) != EOF) {
                printf("%d\t", value);
            }
        }
    }
    
    fclose(fp);

    return 0;
}