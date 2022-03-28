#include<iostream>
using namespace std;
int main()
{
	int n, S, i;
	S = 1;
	i = 1;
	cout<<"\nNhap n :";
	cin>>n;
	do{
        S = S * 2*i;
        i++;
	}while(i<=n);
	cout<<"Tong cac so nguyen la :"<<S<<endl;
	return 0;
}