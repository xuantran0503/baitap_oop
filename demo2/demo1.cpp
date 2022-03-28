#include <iostream>
using namespace std;
class HangHoa{
	private:
		char MaHang[8];
		char TenHang[30];
		int sl;
		float dg, ThanhTien;

	public:
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.getline(MaHang, 8);
			cout<<"\nNhap ten hang: ";
			cin.getline(TenHang, 30);
			cout<<"\nNhap so luong: ";
			cin>>sl;
			cout<<"\nNhap don gia: ";
			cin>>dg;
			fflush(stdin);
		}

		void tinhTien()
		{
			ThanhTien = sl*dg;
		}

		void xuatTT()
		{
			cout<<"Ma hang: "<<MaHang
				<<"Ten hang: "<<TenHang
				<<"So luong: "<<sl
				<<"Don gia: "<<dg
				<<"Thanh tien: "<<ThanhTien<<endl;
		}

		void in()
		{
			cout<<"\nDon gia lon hon 50 la: ";
			if(dg > 50)
			{
				xuatTT();
			}
		}	
};

int main(int argc, char *argv[])
{
	int n;
	cout<<"\nNhap so luong hang hoa: ";
	cin>>n;
	HangHoa a[n];
	fflush(stdin); //cin.ignore()
	cout<<"\nNhap thong tin hang hoa: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nHang hoa thu "<<i+1<<endl;
		a[i].nhap();
	}

	cout<<"\nXuat thong tin hang hoa: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nHang hoa thu "<<i+1<<endl;
		a[i].in();
	}
	return 0;
} 
 

