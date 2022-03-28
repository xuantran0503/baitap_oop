#include <iostream>
#include <string>
using namespace std;
class KH
{
	private:
		string ht, cmt, k;
		struct NS
		{
			int ngay, thang, nam;
		};
		NS ns;
	public:
		void nhap()
		{
			cin.ignore();
			cout <<"nhap ho ten: "; getline(cin, ht);
			cout <<"nhap so cmt: "; getline(cin, cmt);
			cout <<"nhap ho khau: "; getline(cin, k);
			cout <<"nhap ngay thang nam sinh: "; cin >> ns.ngay >> ns.thang >> ns.nam;
		}
		void xuat()
		{
			cout <<"Ho ten: "<<ht<<endl;
			cout <<"CMT: "<<cmt<<endl;
			cout <<"Ho khau: "<<k<<endl;
			cout <<"Ngay sinh: "<< ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<endl;
			cout <<"=============================\n";
		}
		string &getht()
		{
			return ht;
		}
		int getts()
		{
			return ns.thang;
		}
};
void swap(float num1, float num2)
{
	float temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
class quanly
{
	public:
		KH a[100];
		int n, i;
		void nhap()
		{
			cout<<"nhap so khach hang: "; cin >> n;
			for(i = 0; i<n; i++)
			{
				cout <<"nhap thong tin cua khach hang thu "<<i+1<<endl;
				a[i].nhap();
			}
		}
		void sapxep()
		{
			for(i=0; i<n; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(a[i].getht().compare(a[j].getht())>0)
					{
						swap(a[i], a[j]);
					}
				}
			}
			for(i=0; i<n; i++)
				a[i].xuat();
		}
		void timkiem()
		{
			for(i=0; i<n; i++)
			{
				if(a[i].getts()==12)
					a[i].xuat();
			}
		}
};
int main()
{
	quanly a;
	a.nhap();
	// system("cls");
	cout<<"danh sach theo thu tu tang dan: \n";
	a.sapxep();
	// system("pause");
	// system("cls");
	cout <<"danh sach khach hang sinh thang 12: \n";
	a.timkiem();
}