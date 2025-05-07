#include<iostream>
using namespace std;
int num;
int addition(int num1)
{
  int num2;
  cout<<"enter number:";
  cin>>num2;
  return num1+num2;
}
int main()
{
	cout<<"1. addition\n";
	cout<<"0.Exit\n";
	int choise;
	cout<<"enterr your choise:";
	cin>>choise;
	while(1)
	{  
		switch(choise)
		{
			case 0:
				{
					return 0;
				}
			case 1:
				{
					int num1=0;
					cout<<"enter number:";
					cin>>num1;
					num=addition(num1);
					cout<<num<<endl;

				}
		}
	}
}




