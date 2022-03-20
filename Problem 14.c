#include<stdio.h>
#include<string.h>

int main(){

 char x[20]="Suhas";
 char y[20];
 char *py = y;
 char *px = x ;
 int lenx = strlen(x) -1 ;
 px = px + lenx ;
 while (px >= x){
    *py = *px ;
    py++;
    px--;
    }
 *py = '\0';
 printf("%s",y);
}
