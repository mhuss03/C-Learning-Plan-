#include <stdio.h>
#include <string.h>

char* reverse(char*);

int main() {

    char *s = "hello";
    printf("%s\n", reverse(s));
    return 0;
}


char *reverse(char *s) {
    
    char *b = "";

    for(int i = 0; i < strlen(s); i++) {
        char c = *(s+i); 
        strncat(b, &c, 1);
    }
    return b;
}