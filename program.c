#include<stdio.h>
int main()
{
  int a[50],n,i;
  int max_end_here=0;
  printf("Enter the size of an array\n");
  scanf("%d",&n);
  printf("enter the elements of an array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
    int max_so_far=a[0];
  for(i=0;i<n;i++)
  {
    max_end_here=max_end_here+a[i];
    if(max_so_far<max_end_here)
    {
      max_so_far=max_end_here;
    }
    if(max_end_here<0)
    {
      max_end_here=0;
    }
  }
    printf("The maximum contiguous array sum is\n%d",max_so_far);
  return 0;
}
