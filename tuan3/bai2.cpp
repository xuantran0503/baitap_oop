#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class GV{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl;
	public:
		friend istream& operator >>(istream& is, GV &a){
			cin.ignore();
			cout<<"Ho & ten: ";
			is.getline(a.ht, 30);
			cout<<"Tuoi: ";
			is>>a.t;
			cin.ignore();
			cout<<"Bang cap cao nhat: ";
			is.getline(a.bc, 15);
			cout<<"Chuyen nganh: ";
			is.getline(a.cn, 20);
			cout<<"Bac luong: ";
			is>>a.bl;
			
			return is;
		}
		friend ostream& operator <<(ostream& os, GV a){
			os<<setw(10)<<a.ht<<"|"<<setw(10)<<a.t<<"|";
			os<<setw(15)<<a.bc<<"|"<<setw(15)<<a.cn<<"|";
			os<<setw(10)<<a.bl<<"|"<<endl;
			
			return os;
		}
		float getlcb()
		{
			float lcb;
			return lcb = bl*610;
		}
		
		char * getbc()
		{
			return bc;
		}
};


int main()
{
	int n;
	GV a[100];
	lai:
	system("color A");
	system("cls");
	cout<<"Moi nhap so luong giao vien: "; cin>>n;
	if(n<0) goto lai;
	for(int i=0; i<n; i++){
		cout<<"--Moi nhap thong tin giao vien thu "<<i+1<<"--"<<endl;
		cin>>a[i];
	}
	cout<<"-----------------------Thong tin giao vien-----------------------"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(a[j].getbc(), a[i].getbc())<0)
			{
				GV tg;
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	for(int i=0; i<n; i++) cout<<a[i];
	cout<<"-----------------------------------------------------------------"<<endl;
	char k;
	cout<<"Ban co muon nhap lai khong? (Y|N): "; cin>>k;
	if(k=='y'||k=='Y') goto lai;
}