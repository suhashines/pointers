#include<stdio.h>
#include<string.h>

int main()
{
    char s[20]="HeLlohenlo";
    int i,j,count;

    printf("%d\n",strcmp(a,s)) ;

    for(i=0;s[i]!='\0';i++)
    {   count = 1 ;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j] || (s[i]-'a'+'A'==s[j]) || (s[i]-'A'+'a'==s[j]))
               {
                 s[j]='0' ;
                 count=count+1 ;
               }
        }
        if(s[i]!='0')
            printf("%c occurs %d times\n",s[i],count) ;

    }
}
