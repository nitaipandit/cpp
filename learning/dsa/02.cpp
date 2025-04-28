//find maximum-minimum.
#include<iostream>
using namespace std;
int main()
{
  int i,n,j,max=0;
  cout<<"enter the length of an array:";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"enter the value of array:";
    cin>>arr[i];
  }
  for(i=0;i<n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
    }

  }
  int min=max;
  for(i=0;i<n;i++)
  {
    if(min>arr[i])
    {
      min=arr[i];
    }
  }
  cout<<"maximun-no: "<<max<<endl;
  cout<<"minimum-no: "<<min<<endl;
}
