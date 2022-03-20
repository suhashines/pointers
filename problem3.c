#include<stdio.h>


int main(){
 int arr[15];
 int size=4 ,i ,num=20 , temp;
 int *pa , *pb ;
 pa = arr ;
 pb = arr ;

 for(i=0;i<size;i++){
    printf("%dth element: ",i+1);
    scanf("%d",pa);
    pa++;
 }
 pa = arr;
 int count=1;
 while(pa<arr+size){
    if(*pa==num)
        break;
    pa=pa+1;
    count=count+1;
 }

 printf("position: %d",count);


}
