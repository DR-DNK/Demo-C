#include <stdio.h>
int r = 0 ; 
int q ;
int a = 0 ;
int n;
int i ;
int palindrome(int q)
{  

    i = q;
   if(i == 0)
   return 0;
   else{ 
   r = i % 10;
   printf("%d r\n",r);
   a = a*10 + r;
   printf("%d a\n",a);
   i = i/10;
   printf("%d i\n",i);
   palindrome(i);}

   if(a==q)
   {
     printf("palindrome");
   }
   else
   printf("anti - palindrome");
}


int main()
{   
    
    printf("enter a number :");
    scanf("%d",&n);
    palindrome(n);
}


/*

n / 10;
a  = i;
i = n % 10;

*/