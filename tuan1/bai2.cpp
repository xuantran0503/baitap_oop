#include<iostream>
using namespace std;
int main()
{
	int n;
	do{
	cout<<"Nhap vao so KW dien tieu thu :";
	cin>>n;
	cout<<"Nhap lai!"<<endl;
	}while(n < 0);
	if(n >= 0 && n <= 100)
	{
		cout<<"Don gia 2000 dong/KW"<<endl;
	}
	if(n >= 101 && n <= 200)
	{
		cout<<"Don gia 2500 dong/KW"<<endl;
	}
	if(n >= 201 && n <= 300)
	{
		cout<<"Don gia 3000 dong/KW"<<endl;
	}
	if(n > 300)
	{
		cout<<"Don gia 5000 dong/KW"<<endl;
	}
	return 0;
}