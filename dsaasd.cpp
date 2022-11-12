 #include<iostream>
using namespace std;
int main()
{
 int a=30,b=45,sedikit,lebih,sama,tsama;
  //nilai
 a=16;
 b=32;
 //proses
 sedikit=a<b;
 lebih=a>b;
 sama=a==b;
 tsama=a!=b;
  //output
 cout<<"\nAnggota Siswa Pagi Lebih Sedikit daripada Siswa Malam = "<<sedikit<<endl;
 cout<<"\nAnggota Siswa Pagi Lebih Banyak daripada Siswa Malam = "<<lebih<<endl;
 cout<<"\nAnggota Siswa Pagi Sama dengan Siswa Malam = "<<sama<<endl;
 cout<<"\nAnggota Siswa Pagi Tidak Sama dengan Siswa Malam = "<<tsama<<endl;
 return 0; }
