#include<stdio.h>
#include<string.h>
 
int main()
{
   char n[3000];
   int i;
   scanf("%s",n);
   i=strlen(n);
   n[i]='.';
   printf("%s",n);
 
   return 0;
}





