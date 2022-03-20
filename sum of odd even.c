#include<stdio.h>

int main(){
int i,size=5,sumE=0,sumO=0;
int a[5]={2,1,3,5,1};
int *pa = a ;

for(i=0;i<size;i++){
    if(i%2==0)
        sumE+= *(pa+i);
    else
        sumO+= *(pa+i);
}

if(sumE>sumO)
    printf("Even index sum is greater.\n");
else if(sumE<sumO)
     printf("Odd index sum is greater.\n");
else
    printf("Equal");
}
