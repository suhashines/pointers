#include<stdio.h>
#include<string.h>


void permute(char s[],int l,int r)
{   int i;
    char temp;

    if(l==r)
    {
        printf(" %s\n",s);
    }
    else
    {
       for(i=l;i<=r;i++)
       {
           //swap i with l
           temp = s[i] ;
           s[i] = s[l] ;
           s[l] = temp ;

           permute(s,l+1,r);

           temp = s[i] ;
           s[i] = s[l] ;
           s[l] = temp ;


       }
    }
}

int main(){

  char s[20],t[20],temp;
  int r;

  printf("Enter the word: ");
  gets(s);

  r=strlen(s)-1;

  permute(s,0,r);


}

/* void changePosition(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void charPermu(char *cht, int stno, int endno)
{
   int i;
   if (stno == endno)
     printf("%s  ", cht);
   else
   {
       for (i = stno; i <= endno; i++)
       {
          changePosition((cht+stno), (cht+i));
          charPermu(cht, stno+1, endno);
          changePosition((cht+stno), (cht+i));
       }
   }
}
