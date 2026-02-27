#include <stdio.h>

void inASCII() {
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c : %d\n", c, c);
    }
}

int main() {
    inASCII();
    return 0;
}