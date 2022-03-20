#include<stdio.h>
#include<string.h>

int main()
{
    /*char s[20]="HelloWorld" ;
    int i , l , k ;

    l = strlen(s) ;

    printf("put k: ");
    scanf("%d",&k) ;

    i = l-k ;
    s[i]='\0' ;
    printf("%s",s); */

    /*char s[20]="12341" , t[20] ;
    int i,ls,j=0;
    ls = strlen(s) ;

    for(i=ls-1;i>=0;i--)
    {
        t[j++]=s[i] ;
    }
    t[j]='\0' ;
    printf("%s\n",t);
    if(strcmp(s,t)==0)
    {
        printf("Palindrome");
    }
    else
        printf("Not palindrome");*/

    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int  *pa = a[0] ;
    int *pb = a[0] ;
    int str,end,temp,j,i;

    str=0;
    end=2;

     pa=a+str ;
     pb=a+end ;

    for(j=0;j<3;j++)
    {
        temp=*(pa+j);
        *(pa+j)=*(pb+j);
        *(pb+j)=temp ;
    }

    for(i=0;i<3;i++){

            pa=a[i];
            for(j=0;j<3;j++)
        {
            printf(" %d ",*(pa+j));
        }
        printf("\n");
    }


}
