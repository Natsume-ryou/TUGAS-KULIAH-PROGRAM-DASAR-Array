#include <iostream>
using namespace std;

main()

{
   int math[100][100],row=3,co=3;
   int transpose [100][100], ans [100][100];
   
   //masukan element
   cout<<"====================="<<endl;
   cout<<"PROGRAM MATRIKS"<<endl;
   cout<<"====================="<<endl;

   for (int i=0; i<row; i++)
   {
    for (int j=0; j<row; j++)
    {
      cout<<"Masukan elemen matriks yang diinginkan :"<<"baris ke-"<<i+1<<"kolom ke-"<<j+1<<":";
      cin>>math[i][j];
    }
   }
   //Matriks yang akan diinputkan
   	 cout<<"------------------------------"<<endl;
     cout<<"	Matriks awal  : "<<endl;
     cout<<"------------------------------"<<endl;

   for (int i=0;i<row;i++)
   {
     for (int j=0;j<co;j++)
     {
      cout<<math[i][j]<<" ";
      if (j==co-1)
      cout<<"\n";
     }
   }
   //merubah baris dan kolom
      cout << "\n\n";
     for(int i=0;i<row;i++)
       {
       for(int j=0;j<co;j++)
       {
         transpose[j][i] = math[i][j];
       }
     }
     cout<<"------------------------------"<<endl;
     cout<<"	Hasil Transpose  : "<<endl;
     cout<<"------------------------------"<<endl;
     
     for(int i=0;i<co;i++)
     {
       for(int j=0;j<row;j++)
       {
         cout<<transpose[i][j]<<" ";
         if(j==row-1)
         cout<<"\n";
       }
     }
     cout<<"------------------------------"<<endl;
     cout<<"	Hasil Penjumlahannya  : "<<endl;
     cout<<"------------------------------"<<endl;
     
     for(int i=0;i<co;i++)
     {
       for(int j=0;j<row;j++)
       {
       ans[i][j] = transpose[i][j] + math[i][j];
         cout<<ans[i][j]<<" ";
         if(j==row-1)
           cout<<"\n";
       }
     }

}
