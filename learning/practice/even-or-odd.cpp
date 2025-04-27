#include<iostream>
using namespace std;
int main(){
	int num;
	int fix=2;
	cout<<"enter a number:";
	cin>>num;
	if(num % 2 ==0||num==fix)
	{
		cout<<"number is even."<<endl;
	}
	else
	{
		cout<<"number is odd."<<endl;
	}
	return 0;
}

