#include<stdio.h>

int main(){

  int a[3][3],i,j,k,num;
  int *pa ;
  printf("put values: \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        pa = a[i] ;
        scanf("%d",pa+j);

        }
  }
 printf("enter number: ");
 scanf("%d",&num);

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        pa = a[i] ;
        if(*(pa+j)==num)
            printf("position: [%d , %d]\n",i+1,j+1);

        }
  }

}
