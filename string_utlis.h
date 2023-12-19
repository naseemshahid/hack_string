#include<stdio.h>
#include<stdlib.h>
#include<string_utlis.h>


void replaceChar(char *s, char oldChar, char newChar);
char *replaceCharCopy(char *s, char oldChar, char newChar,char *ns);
void removeChar(char *s, char c);
char * removeCharCopy( char *s, char c);


//question no 1

void replaceChar(char *s, char oldChar, char newChar){

char *testch=s;

while(*s != '\0'){

if(*s== oldChar){

*s = newChar;

}

s++;

}

printf("\nAfter modification the result is : ");

while ( testch != (s+1) ){
    
    printf("%c",*testch);
    testch++;

}


}

// question 2