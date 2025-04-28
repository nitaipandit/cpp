//simple array.
#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"enter a leangth of an array:";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"enter the value :";
    cin>>arr[i];
  }
  for(i=0;i<n;i++)
  {
    cout<<"the value:"<<arr[i]<<endl;
  }
}



