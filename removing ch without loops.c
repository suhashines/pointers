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

    char s[20]="12341" , t[20] ;
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
        printf("Not palindrome");


}
