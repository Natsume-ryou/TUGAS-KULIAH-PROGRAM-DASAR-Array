#include <iostream>
using namespace std;

int main()
{
    int x[100],n;
    cout<<"=========================="<<endl;
    cout<<"Program bilangan fibonanci"<<endl;
    cout<<"=========================="<<endl;
    
    cout<<"Masukan  nilai yang diinginkan  :";
    cin>>n;
    //menggunakan angka 0 dan 1 sebagai angka awal

    x[0]=0;
    x[1]=1;
    // dimulai dari angka dua dan masuk ke rumus untuk mencari lanjutannya

    for(int i=2;i<n;i++){
        x[i]=x[i-1]+x[i-2];
      }

    for (int i=0;i<n;i++){
      cout<<x[i]<<" ";
    }
}
