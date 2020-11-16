#include<stdio.h>
int fibonacci(int n)
{
       int a = 0,b= 1,i,c=0;
       printf("%d %d ",a,b);
       for(i = 0; i < n -2 ; i++)
      {
               c = b; 
               b = a +b;
               a = c;
               printf("%d ",b);
      }
}
// 0 1 1 2 3 5 8 
 void main()
 {
     int n = 6;
     fibonacci(n);
}