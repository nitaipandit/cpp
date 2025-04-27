#include<iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	char opp;
	cout<<"enter the first number:";
	cin>>num1;
	cout<<"enter the second number:";
	cin>>num2;
	cout<<"enter the oppretion(+,-,*,/)";
	cin>>opp;
	if(opp=='+')
	{
		cout<<"result: "<<num1+num2<<endl;
	}
	else if(opp=='-')
	{
		cout<<"result: "<<num1-num2<<endl;
	}
	else if(opp=='*')
	{
		cout<<"result: "<<num1*num2<<endl;
	}
	else if(num2 != 0)
	{
		cout<<"result: "<<num1/num2<<endl;
	}
	else
	{
		cout<<"intvalid oppretion"<<endl;
	}
	return 0;
	}
