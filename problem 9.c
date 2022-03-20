#include<stdio.h>
#define row 2
#define col 2
// matrix multiplication using pointers

int main(){

 int a[row][col],b[row][col],c[row][col],i,j,k,multi=0;
 int *p;
 p=a[0];

  for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        scanf("%d",(a[i]+j));
    }

 }
 printf("\n enter b elements: ");
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        scanf("%d",(b[i]+j));
    }

 }

 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
            multi=0;
        for(k=0;k<col;k++){
            multi+= (*(a[i]+k)) * (*(b[k]+j)) ;

        }
    printf(" %d ",multi);
    }

   printf("\n");

 }



}
