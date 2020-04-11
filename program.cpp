#include<iostream>
using namespace std;
int main()
{
  int a[50],n,i;
  int max_end_here=0;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;
  cout<<"enter the elements of an array"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
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
    cout<<"The maximum contiguous array sum is"<<"\n"<<max_so_far<<endl;
  return 0;
}
