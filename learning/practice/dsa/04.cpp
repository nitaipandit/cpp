//find second largest.
#include<iostream>
using namespace std;
int main()
{
  int i,n,max=0,smax=0;
  cout<<"enter the langth of an array:";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"enter the value of an array:";
    cin>>arr[i];
  }

  //first find largest number.
  for(i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }

  //then find smallest number.
  int min=max;
  for(i=0;i<n;i++)
  {
    if(min>arr[i])
    {
      min=arr[i];
    }
  }

  for(i=0;i<n;i++)
  {
    if(arr[i]==max)
    {
      arr[i]=min;
    }
  }
  //now find second largest.
  for(i=0;i<n;i++)
  {
    if(arr[i]>smax)
    {
      smax=arr[i];
    }
  }
  cout<<"Second largest is: "<<smax<<endl;
  
}
