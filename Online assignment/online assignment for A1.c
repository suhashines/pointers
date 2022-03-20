#include<stdio.h>
#include<string.h>

int main()
{
    char a[30]="abcabc" ;
    char b[10]="abc" ;

    int cmp , flag=0 ,i=0,j=0 ,la,lb ;

    la = strlen(a) ;
    lb = strlen(b) ;

    if(la%lb!=0)
        flag=1;

    else
    {
        while(a[i]!='\0')
    {
        cmp = a[i]-b[j] ;

        if(cmp!=0)
        {
            flag=1;
            break;
        }

        i++;
        j++;

        if(j==lb)
            j=0 ;

    }

    }

    if(flag==0)
        printf("Yes") ;
    else
        printf("No") ;

}

