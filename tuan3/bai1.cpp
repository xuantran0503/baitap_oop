#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

typedef struct{
	int ngay;
	int thang;
	int nam;
}NS;

class KH{
	private:
		char ht[30];
		NS ns;
		char cmt[10];
		char k[50];
	public:
		friend istream& operator >>(istream& is, KH &a){
			fflush(stdin);
			cout<<"Ho&ten: ";
			is.getline(a.ht, 30);
			cout<<"Ngay sinh: ";
			is>>a.ns.ngay;
			cout<<"Thang sinh: ";
			is>>a.ns.thang;
			cout<<"Nam sinh: ";
			is>>a.ns.nam;
			fflush(stdin);
			cout<<"So chung minh thu: ";
			is.getline(a.cmt, 10);
			cout<<"Ho khau: ";
			is.getline(a.k, 50);
			return is;
		}
		friend ostream& operator <<(ostream& os, KH a){
			os<<"-----------------------------------------------------------------"<<endl;
			os<<setw(10)<<a.ht<<"|";
			os<<setw(10)<<a.ns.ngay<<"|";
			os<<setw(10)<<a.ns.thang<<"|";
			os<<setw(10)<<a.ns.nam;
			os<<setw(10)<<a.cmt<<"|";
			os<<setw(10)<<a.k<<"|"<<endl;
			os<<"-----------------------------------------------------------------"<<endl;
			return os;
		}
		char * getk()
		{
			return k;
		}
		int gett()
		{
			return ns.nam;
		}
};

int main()
{
	int n;
	KH a[100];
	lai:
	system("cls");
	system("color A");
	cout<<"Moi so luong khach hang: "; cin>>n; 
	if(n<0) goto lai;
	for(int i=0; i<n; i++){
		cout<<"\n__Moi nhap thong tin khach hang thu "<<i+1<<"__"<<endl;
		cin>>a[i];
	}
	cout<<"------------------Danh sach khach hang co ho khau o Ha Noi-----------------"<<endl;
	for(int i=0; i<n; i++){
		if(strcmp(a[i].getk(),"Ha Noi")==0)
		cout<<a[i];
	}
	cout<<"--------------Danh sach khach hang sap xep giam dan theo tuoi--------------"<<endl;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++)
		{
			if(a[i].gett() < a[j].gett())
			{
				KH tg;
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
		cout<<a[i];
	}
	char y;
	cout<<"Ban co muon nhap lai khong? (Y|N): "; cin>>y;
	if(y=='y'||y=='Y') goto lai;
	return 0;
}