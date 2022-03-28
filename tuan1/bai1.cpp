#include<iostream>
using namespace std;
int main()
{
	int n;
	do{
	cout<<"Nhap vao thu trong tuan :";
	cin>>n;
		switch(n)
		{
			case 1: 
				cout<<"Sunday"<<endl;
				break;
			case 2: 
				cout<<"Monday"<<endl;
				break;
			case 3: 
				cout<<"Tuesday"<<endl;
				break;
			case 4: 
				cout<<"Wednesday"<<endl;
				break;
			case 5: 
				cout<<"Friday"<<endl;
				break;
			case 6: 
				cout<<"Saturday"<<endl;
				break;
			
			case 7: 
				cout<<"Sunday"<<endl;
				break;
			
			default :
				cout<<"Thu nhap sai! moi nhap lai ->"<<endl;
				break;
		}
	}while(n <= 0 || n >=8);
	return 0;
}