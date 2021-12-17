
#include <stdio.h>
int linear_search (int a[], int n)
{
  int i,x,c,flag;
  printf("\nEnter element to be searched : ");
  scanf("%d",&x);
  flag=0;
  for (i=0;i<n;i++)
  {
    if (a[i]==x)
    {
      printf("\nElement found at index %d\n",i+1);
      flag=1;
      break;
    }
  }
  if (flag==0)
  {
    printf("\nArray element not found\n");
  }
}

int main()
{
  int n,i,r=1;
  char c;
  printf("\nEnter the size of the array : ");
  scanf("%d",&n);
  int a[n];
  printf("\nEnter array elements\n");
  for (i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\nArray elements are :\n");
  for (i=0;i<n;i++)
    printf("%d\t",a[i]);
  while (r==1)
  {
    linear_search(a,n);
    printf("Do you wish to continue (Yes=1 No=2) : ");
    scanf("%d",&r); 
  }
}
