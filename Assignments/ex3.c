#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[30];
    float grade;
};

int main() {
    struct SinhVien sv;

    printf("Nhap vao TT 1 sv:\n");
    printf("ID: ");
    scanf("%d", &sv.id);
    getchar(); 
    printf("Name: ");
    gets(sv.name);
    printf("Grade: ");
    scanf("%f", &sv.grade);

    FILE *f1 = fopen("baitap3.txt", "w");
    if (f1 != NULL) {
        fprintf(f1, "%d\n", sv.id);
        fprintf(f1, "%s\n", sv.name);
        fprintf(f1, "%.1f\n", sv.grade);
        fclose(f1);
    }

    printf("\nDoc thong tin tu file:\n");
    FILE *f2 = fopen("baitap3.txt", "r");
    if (f2 != NULL) {
        struct SinhVien sv_read;
        
        fscanf(f2, "%d", &sv_read.id);
        fgetc(f2); 
        fgets(sv_read.name, 30, f2);
        sv_read.name[strcspn(sv_read.name, "\n")] = 0; 
        fscanf(f2, "%f", &sv_read.grade);

        printf("ID: %d\n", sv_read.id);
        printf("Name: %s\n", sv_read.name);
        printf("Grade: %.1f\n", sv_read.grade);
        
        fclose(f2);
    }

    return 0;
}