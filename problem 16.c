#include<stdio.h>
#include<string.h>

int main(){
 int a[10]={4,5,3,5,2},size=5,i,j,temp;
 int *pa = a ;
 for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(*(pa+i) < *(pa+j)){
            temp = *(pa+i);
            *(pa+i) = *(pa+j);
            *(pa+j) = temp ;
        }
    }
 }
 printf("descending order sorting: \n");

 for(i=0;i<size;i++)
    printf(" %d ",*(pa+i));

}
