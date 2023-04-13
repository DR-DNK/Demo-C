#include  <stdio.h>
int ans[5];

int * fsquare(int *arr , int n)
{
    
 for(int i = 0;i<n;i++)
 {
    *(ans+i) =  *(arr+i) * *(arr+i);
    
    
 }
 return ans;
}


int main()
{
   int a[] = {1,2,3,4,5};
   int size ;

   size = sizeof(a)/sizeof(a[0]);

  int *result =  fsquare(a,size);
  
  for(int i = 0 ; i <5 ; i++)
  {
  printf("%d\n",*(result+i));
  }
}