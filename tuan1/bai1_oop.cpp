#include <iostream>
using namespace std;

class sophuc {
    private :
      int pt, pa;
    public:
      void nhap (){
          
              cout<<"\nNhap phan thuc: ";
              cin>> pt;
              cout<<"\nNhap phan ao: ";
              cin>> pa;
          
      }
      void in(){
          cout<<"\nA= "<<pt<<"+"<<pa<<"*j"<<endl;
      }
      int getPA(){
          return pa;
      }
      int getPT(){
          return pt;
      }
};
int main (){
    sophuc a[2];
    for ( int i=0 ; i<2 ; i++){
        a[i].nhap();
    }
    cout<<"\nTong cua 2 so thuc vua nhap la: "
        <<a[0].getPT() + a[1].getPT()
        << "+"<<a[0].getPA() + a[1].getPA()
        <<"*j";
    cout<<"\nHieu cua 2 so thuc vua nhap la: "    
        <<a[0].getPT() - a[1].getPT()
        <<"+"<<a[0].getPA() - a[1].getPA()
        <<"*j";
}