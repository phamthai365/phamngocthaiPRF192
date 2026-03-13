#include <stdio.h>

int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    return 0;
}

int countVowel(char *str){
    int count = 0;

    while(*str != '\0'){
        if(isVowel(*str)){
            count++;
        }
        str++;
    }

    return count;
}

int main(){
    char s[100];
    char *str = s;

    printf("Nhap chuoi: ");
    gets(str);

    int result = countVowel(str);

    printf("So nguyen am: %d", result);

    return 0;
}