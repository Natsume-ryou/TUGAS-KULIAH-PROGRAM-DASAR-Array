#include <iostream>
#include <string>
using namespace std;

main()

{
  int p_mhs;

  cout<<"============================================"<<endl;
  cout<<"Menghitung nilai mahasiswa UNESA"<<endl;
  cout<<"============================================"<<endl;

  cout<<"Masukan jumlah mahasiswa  :";
  cin>>p_mhs;

  int nilai[p_mhs];
  string name[p_mhs],stat[p_mhs];
  char ulang='y';
   

      for (int a=0;a<p_mhs;a++){
          cout<<"Masukan nama "<<a+1<<" : ";
          cin>>name[a];
          cout<<"Masukan nilai ujian  :";
          cin>>nilai[a];

          if(nilai[a]>50){
              stat[a]="SELAMAT ANDA LULUS!";
            }

            else {
              stat[a]="Maaf Anda tidak lulus,harap menghubungi dosen untuk perbaikan!";
            }
      }
      system("cls");
      cout<<endl;
      cout<<"*********************************"<<endl;
      cout<<"            PENGUMUMAN"<<endl; //MENAMPILKAN DATA YANG TELAH DIINPUT
      cout<<"*********************************"<<endl;

            for(int a=0; a<p_mhs; a++){
          cout<<"Nama : "<<name[a]<<endl;
          cout<<"Nilai : "<<nilai[a]<<endl;
          cout<<"Status : "<<stat[a]<<endl;
          cout<<"--------------------------------------------------------------"<<endl;
        }
        
      return 0;
					
}

