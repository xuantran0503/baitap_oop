#include<iostream>
using namespace std;
class GV
{
	private:
		char ht [30];
		int t; 		//tuoi.
		char bc[15];	//bang cap cao nhat duoc dao tao.
		char cn [20]; //chuyen nganh.
		float bl,lcb; //bac luong,luong co ban.
	public:
		void nhap()
		{
			fflush(stdin);
			cout<<"\nNhap ho ten giao vien: "; cin.getline(ht,30);
			cout<<"\nNhap tuoi: "; cin>>t;
			fflush (stdin);
			cout<<"\nNhap bang cap:";
			cin.getline(bc,15);
			cout<<"\nNhap chuyen nganh:";
			cin.getline(cn,20);
			cout<<"\nNhap bac luong:"; cin>>bl;
		}
		float tinh()
		{
			lcb=bl*610;
		}
		void Xuat()
		{
			//lcb=bl*610;
			cout<<"Ho ten:"<<ht
				<<"\tTuoi:"<<t
				<<"\tBang cap:"<<bc
				<<"\tChuyen nganh:"<<cn
				<<"\tBac luong:"<<bl
				<<"\tTien luong:"<<lcb<<endl;
		}
		void in()
		{
			lcb=bl*610;
			if (lcb<2000)
			{
				Xuat();
			}
			else {
				cout<<"\nKhong co giao vien nao co bac luong <2000!!!";
			}
		}
};
int main()
{
	int n;
	cout<<"\nMoi ban nhap vao so giao vien:";
	cin>>n;
	GV a[n];
	cout<<"\nNhap thong tin GV.";
	for (int i=0;i<n;i++)
	{
		cout<<"\nGv thu "<<i+1<<":";
		a[i].nhap();
	}
	cout<<"Danh sach giao vien co tien luong <2000 la:"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"\nGiao vien thu "<<i+1<<":";
		//if (lcb<2000)
		{
			a[i].in();
		}
	}
	int j,tg;
	cout<<"\n\t\t\t---SAP XEP THEO CHUYEN NGANH---";
	for (int i=0;i<n;i++)
	{
		
	}
	return 0;
}