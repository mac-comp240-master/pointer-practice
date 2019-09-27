#include<stdio.h>

/* Copies String t to s using array indexing */
void array_strcpy(char *s, char *t) {
    int i;

    i = 0;
    while((s[i] = t[i]) != '\0') {
	i++;
    }
}

/* Copies String t to s using pointers */
void ptr_strcpy(char *s, char *t) {
    //Explicit Version: comment this out to try other version
    while((*s = *t) != '\0') {
	s++;
	t++;
    }

    //Simplified Version: uncomment this to run
    //while((*s++ = *t++) != '\0');
}

/* Concatenates t to s */
void my_strcat(char *s, char *t) {

}


/* Returns 1 if String t occurs at the end of s,
   0 otherwise */
int my_strend(char *s, char *t) {

    return 0;
}

/* Copies the first n characters of t to s */
void my_strncpy(char *s, char *t, int n) {

}
