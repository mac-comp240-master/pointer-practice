#include<stdio.h>

// method signatures from string_funcs.c
void array_strcpy(char *s, char *t);
void ptr_strcpy(char *s, char *t);
void my_strcat(char *s, char *t);
int my_strend(char *s, char *t);
void my_strncpy(char *s, char *t, int n);

int main() {

    char dest[128];

    array_strcpy(dest, "Array Test Copy!");
    printf("Testing Array Copy: %s\n", dest);

    ptr_strcpy(dest, "Pointer Test Copy!");
    printf("Testing Pointer Copy: %s\n", dest);

}
