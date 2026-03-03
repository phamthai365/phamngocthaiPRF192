#include <stdio.h>
float calculate_taxi_fare(float distance) {
    float fare;
    if (distance <= 1) {
        fare = 15000;
    }
    else if (distance <= 30) {
        fare = 15000 + (distance - 1) * 12000;
    }
    else {
        fare = 15000 + 29 * 12000 + (distance - 30) * 10000;
    }
    return fare;
}
int main() {
    float distance;
    printf("Nhap so km da di: ");
    scanf("%f", &distance);
    printf("Tien cuoc taxi: %.0f VND\n", calculate_taxi_fare(distance));
    return 0;
}