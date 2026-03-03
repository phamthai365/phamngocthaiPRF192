#include <stdio.h>
float calculate_salary(float hours, float rate) {
    float salary;
    if (hours <= 40) {
        salary = hours * rate;
    } else {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    }
    return salary;
}
int main() {
    float hours, rate;
    printf("Nhap so gio lam viec: ");
    scanf("%f", &hours);
    printf("Nhap luong moi gio: ");
    scanf("%f", &rate);
    printf("Tong luong: %.2f VND\n", calculate_salary(hours, rate));
    return 0;
}