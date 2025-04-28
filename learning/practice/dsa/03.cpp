//reverse in array.
#include<iostream>
using namespace std;
int main()
{
  int i,n,j,temp;
  cout<<"enter the length of an array:";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"enter the value of an array:";
    cin>>arr[i];
  }
  for(i=0;i<n;i++)
  {
    cout<<"before reverse:"<<arr[i]<<endl;
  }

  // hear we shorting the array;
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(arr[i]>=arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for(i=0;i<n/2;i++)
  {
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
  }
  for(i=0;i<n;i++)
  {
    cout<<"after reverse:"<<arr[i]<<endl;
  }
}
