#include<stdio.h>
#include<stdlib.h>
#include"string_utlis.h"


int main(){

int choice;
printf("\nEnter Question No you want to execute (1-5) : ");
scanf("%d",&choice);

//QUESTION 1

if (choice==1){
    
int string;
printf("\nHow many characters you want in your string : ");
scanf("%d",&string);

getchar();

int size = string+1;

char str[size];
char oldChar;
char newChar;

printf("\nEnter Your String : ");
scanf("%s",&str);

getchar();

printf("\nEnter Character you want to remove : ");
scanf("%c",&oldChar);

getchar();

printf("\nEnter Character you want to Place : ");
scanf("%c",&newChar);

replaceChar(str , oldChar, newChar);

}

//QUESTION 2

if (choice==2){
    
int s;
printf("\nHow many characters you want in your string : ");
scanf("%d",&s);

getchar();

int size = s+1;

char str[size];
char oldChar;
char newChar;

printf("\nEnter Your String : ");
scanf("%s",&str);

getchar();

printf("\nEnter Character you want to remove : ");
scanf("%c",&oldChar);

getchar();

printf("\nEnter Character you want to Place : ");
scanf("%c",&newChar);

char new_str[size];

replaceCharCopy(str , oldChar, newChar,new_str);

new_str[size-1]='\0';

printf("\nAfter Replacement we get : %s",new_str);

}

// QUESTION 3

if(choice==3){

int string;
printf("\nHow many characters you want in your string : ");
scanf("%d",&string);

int size = s+1;

char str[size];

printf("\nEnter String : ");
scanf("%s",&str);
getchar();

char c;
printf("\nEnter Character you want to remove from \"%s\" : ",str);
scanf("%c",&c);

removeChar(str,c);


}

// QUESTION 4

if(choice==4){

int s;
printf("\nHow many characters you want in your string : ");
scanf("%d",&s);

int size = s+1;

char str[size];

printf("\nEnter String : ");
scanf("%s",&str);
getchar();

char c;
printf("\nEnter Character you want to remove from \"%s\" : ",str);
scanf("%c",&c);

char *ptr = removeCharCopy(str,c);

printf("\nAfter Removing %c we get : %s",c,ptr);

}


}