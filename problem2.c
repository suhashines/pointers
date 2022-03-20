#include<stdio.h>

int mystrlen(char s[], char *ps){

   int count=0;

   while(*ps!='\0'){
    count++;
    ps++;
   }

   return count;

}

int main(){
  //testing the authentication of github
 char s[100]="im tired";
 char *ps ;
 ps = s ;

 printf(" %d " , mystrlen(s,ps));



}
