#include<stdio.h>

void swap(int a , int b , int *pa , int *pb){

  *pa = b ;
  *pb = a ;



}

int main(){

 int a=10,b=5;
 int *pa , *pb;
 pa = &a ;
 pb = &b ;
 printf("%d %d \n" , a , b);
 swap(a,b, pa, pb);
 printf(" %d %d",a,b);



}
