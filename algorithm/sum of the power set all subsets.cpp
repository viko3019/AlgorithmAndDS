#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
  {
     int n,i;
     scanf("%d",&n);
     long long int ans=1;
     for(i=0;i<n-1;i++)
        ans=ans<<1;
     ans=ans*(n*(n+1))/2;
     printf("%lld\n",ans);
   }
   return 0;
}









