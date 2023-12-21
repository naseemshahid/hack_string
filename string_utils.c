// HACK STRINGS EXERCISES QUESTIONS

#include<stdio.h>

#include<stdlib.h>
#include<string.h>
#include "string_utils.h"

// QUESTION NO : 1

void replaceChar(char *s, char oldChar, char newChar){

char *ch=s;

while(*s != '\0'){

if(*s== oldChar){

*s = newChar;

}

s++;

}

printf("\nAfter Replacement we get : ");

while ( ch != (s+1) ){
    
    printf("%c",*ch);
    ch++;

}


}

// QUESTION NO : 2

char *replaceCharCopy(char *s, char oldChar, char newChar){

char *dyn_str = (char*) malloc(strlen(s)+ 1); 

char *dyn_str_cpy=dyn_str;

while(*s!='\0'){

        if(*s==oldChar){

            *s=newChar;
            }

        *dyn_str=*s;

        s++;
        dyn_str++;

    }

    *dyn_str='\0';

return dyn_str_cpy;

}

// QUESTION NO : 3

void removeChar(char *s, char c){

char *ptr=s;

char *p;

while(*s!='\0'){

if(*s==c){

*s=*(s+1);
p=s+1;

while( *p != '\0'){

*p = *(p+1);
p++;

}

}

s++;
}

printf("\nAfter removing %c we get : ",c);

while(*ptr!='\0'){

printf("%c",*ptr);
ptr++;

}


}

// QUESTION NO : 4

char * removeCharCopy( char *s, char c){


char *ptr=s;

char *p;

while(*s!='\0'){

if(*s==c){

*s=*(s+1);
p=s+1;

while( *p != '\0'){

*p = *(p+1);
p++;

}

}

s++;
}

char *dynamic_str = (char * ) malloc(strlen(ptr) + 1);

strcpy(dynamic_str,ptr);

return dynamic_str;

}

// QUESTION NO : 5

char **lengthSplit(const char *s, int n){

    int size = (strlen(s)+1)/n;

    if((strlen(s)+1) % n != 0){

size++;

    }

    

char **ptrs_ch = (char**) malloc(sizeof(char*) * size);

for(int i=0;i<size;i++){

ptrs_ch[i] = (char*) malloc(n);

for(int j=0;j<n;j++){

ptrs_ch[i][j] = *s;
s++;



}
if(*s=='\0'){

break;


}

}

ptrs_ch[n-1][n-1]='\0';

return ptrs_ch;

}