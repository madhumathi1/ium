#include <stdio.h>
int main()
{
  int n,arr[n],i,min=arr[0];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      if(min>arr[i])
      {
          min=arr[i];
      }
    }
 printf("%d",min);
 return 0;
}
  
