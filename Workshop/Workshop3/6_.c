#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play_game() {
    int secret, guess;
    int max_turns = 7;
    // Khởi tạo số ngẫu nhiên
    srand(time(NULL));
    secret = rand() % 100 + 1; // số từ 1 đến 100
    printf("=== GAME DOAN SO ===\n");
    printf("Ban co %d lan doan.\n", max_turns);
    printf("Doan so trong khoang 1 - 100\n");
    for (int i = 1; i <= max_turns; i++) {
        printf("\nLan %d - Nhap so ban doan: ", i);
        scanf("%d", &guess);
        // Nhập sai phạm vi
        if (guess < 0) {
            printf("So khong hop le! Nhap lai.\n");
            i--;           
            continue;
        }
        if (guess == secret) {
            printf("Chuc mung! Ban doan dung\n");
            break;
        } else if (guess < secret) {
            printf("So ban doan NHO hon!\n");
        } else {
            printf("So ban doan LON hon!\n");
        }

        if (i == max_turns) {
            printf("\nBan da thua So dung la: %d\n", secret);
        }
    }
}
int main() {
    play_game();
    return 0;
}