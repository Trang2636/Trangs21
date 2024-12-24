#include <stdio.h>
#include <stdlib.h>
int main() {
    char s[100];  
    FILE *ptr = fopen("bt01.txt", "r");  

    if (ptr == NULL) {
        printf("Loi\n");
        return 1;
    }

    while (fgets(s, sizeof(s), ptr) != NULL) {
        printf("%s", s);
    }

    fclose(ptr);  
    return 0; 
}

