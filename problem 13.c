#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
  char x[20]="Hello";
  char y[20]="Helloaorld";
  char *px = x ;
  char *py = y ;

  /*int lenx=strlen(x);
  int leny = strlen(y); */
  //strcpy(x,y)=x=world;

  while(*py!='\0' && *px!='\0'){
    if(*px != *py){

        break;
        }
    px++;
    py++;
  }
  int m = *px - *py ;
  printf("%d" , m);

}
