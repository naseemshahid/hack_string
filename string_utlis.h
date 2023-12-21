#include<stdio.h>
#include<stdlib.h>



void replaceChar(char *s, char oldChar, char newChar);
char *replaceCharCopy(char *s, char oldChar, char newChar,char *newst);
void removeChar(char *s, char c);
char * removeCharCopy( char *s, char c);
char **lengthSplit(const char *s, int n);

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

char *replaceCharCopy(char *s, char oldChar, char newChar,char *newst){

while(*s!='\0'){

        if(*s==oldChar){

            *s=newChar;
            }

        *newst=*s;

        s++;
        newst++;

    }



}



// QUESTION 3

void removeChar(char *s, char c){

char *cc=s;

char *cc2;

while(*s!='\0'){

if(*s==c){

*s=*(s+1);
cc2=s+1;

while( *cc2 != '\0'){

*cc2 = *(cc2+1);
cc2++;

}

}

s++;
}

printf("\nAfter removing %c we get : ",c);

while(*cc!='\0'){

printf("%c",*cc);
cc++;

}


}



// QUESTION NO : 4

char * removeCharCopy( char *s, char c){


char *p1=s;

char *p2;

while(*s!='\0'){

if(*s==c){

*s=*(s+1);
p2=s+1;

while( *p2 != '\0'){

*p2 = *(p2+1);
p2++;

}

}

s++;
}

char *string = (char * ) malloc(strlen(p2) + 1);

strcpy(string,p1);

return string;

}

// question 5
char **lengthSplit(const char *s, int n){

    int size = (strlen(s)+1)/n;

    if((strlen(s)+1) % n != 0){

size++;

    }

    

char *ptrs_ch = (char) malloc(sizeof(char) * size);

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