#include<iostream>
using namespace std;
class DaThuc3 //Da thuc bac 3.
{
	private:
		int a;	//He so bac 3.
		int b;	//HS bac 2.
		int c;	//HS bac 1.
		int d;	//Hs bac 0.
	public:
	DaThuc3()//Ham khoi tao voi gia tri ngam dinh bang 0.
	{
		cout<<"\nHam tao 0 tham so voi gia tri ngam dinh bang 0.";
		a=0; //this->a=0
;		b=0;
		c=0;
		d=0;
	}
	void nhaphs()	//Nhap he so.
	{
		cout<<"\nNhap he so bac 3:"; cin>>a;
		cout<<"\nNhap he so bac 2:"; cin>>b;
		cout<<"\nNhap he so bac 1:"; cin>>c;
		cout<<"\nNhap he so bac 0:"; cin>>d;
	}
	void xuatTT()
	{
		cout<<"\na="<<a<<"\tb="<<b
			<<"\tc="<<c<<"\td="<<d<<endl;
		cout<<"\n\t\t"<<a<<"x^3"<<" + "<<b<<"x^2"<<" + "<<c<<"x"<<" + "<<d<<endl;
	}
	int getb3()//getter.
	{
		return a;
	}
	int getb2()
	{
		return b;
	}
	int getb1()
	{
		return c;
	}
	int getb0()
	{
		return d;
	}
	~DaThuc3()//Ham huy.
	{
		cout<<"\nHam huy!!";
	}
};
int main()
{
	DaThuc3 s;
	s.xuatTT();
	DaThuc3 a[2];
	cout<<"\n-----NHAP GIA TRI DA THUC BAC 3---";
	for (int i=0;i<2;i++)
	{
		cout<<"\nDa thuc thu "<<i+1<<endl;
		a[i].nhaphs();
	}
	for (int i=0;i<2;i++)
	{
		cout<<"\nDa thuc thu "<<i+1<<" co dang la:";
		a[i].xuatTT();
	}
	cout<<"\nTong cua hai da thuc la:";
	cout<<"\n\t\t"<<a[0].getb3()+a[1].getb3()<<"x^3"
		<<" + "<<a[0].getb2()+a[1].getb2()<<"x^2"
		<<" + "<<a[0].getb1()+a[1].getb1()<<"x"
		<<" + "<<a[0].getb0()+a[1].getb0()<<endl;
	return 0;
}