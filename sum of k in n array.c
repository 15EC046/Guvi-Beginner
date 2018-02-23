#include <stdio.h>
int main()
{
    int a[50],n,k,sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
    for(int i=1;i<=k;i++)
  {
      sum=sum+i;
  }
printf("%d",sum);
    return 0;
}
