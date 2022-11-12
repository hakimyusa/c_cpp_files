#include <conio.h>

#include <iostream>

using namespace std;

main()

{

char a,b,c,d;

int b1,b2,b3,b4,t;



   cout<<"\t==========================\n";

   cout<<"\tPROGRAM SOAL PILIHAN GANDA\n";

   cout<<"\t==========================\n";

   cout<<"(1) Apakah kepanjangan dari STMIK ASIA ?\n\n";

   cout<<"a. Sekolah Tinggi Manajemen dan Ilmu Komputer\n";

   cout<<"b. Sekolah Tinggi Manajemen dan Informatika\n";

   cout<<"c. Sekolah Tinggi Manajer dan Ilmu Kebal\n";

   cout<<"d. Sekolah Tanpa Memungut Iuran Kemahasiswaan\n";

   cout<<"Jawaban : ";

   cin>>a;



       if(a=='b')

      {

       b1=25;

      cout<<"Benar\nnilai = "<<b1<<"\n\n\n";

      }

      else

      {

      b1=-5;

      cout<<"Salah\nNilai = "<<b1<<"\n\n\n";

      }



    cout<<"(2) Presiden pertama republik indonesia adalah . . .\n\n";

   cout<<"a. Bj Habibie\n";

   cout<<"b. Abdurrahman Wahid\n";

   cout<<"c. Soeharto\n";

   cout<<"d. Ir Soekarno\n";

   cout<<"Jawaban : ";

   cin>>b;

       if(b=='d')

       {

       b2=25;

      cout<<"Benar\nNilai = "<<b2<<"\n\n\n";

      }

      else

      {

      b2=-5;

      cout<<"Salah\nNilai = "<<b2<<"\n\n";

      }



   cout<<"(3) Pembangunan jembatan sura-madu dimulai pada masa pemerintahan presiden ? \n\n";

   cout<<"a. Abdurahman Wahid\n";

   cout<<"b. Susilo Bambang Yodhoyono\n";

   cout<<"c. Megawati\n";

   cout<<"d. Soekarno\n";

   cout<<"Jawaban anda : ";

   cin>>c;



      if (c == 'c')

      {

       b3=25;

      cout<<"Benar\nNilai = "<<b3<<"\n\n\n";

      }

      else

      {

      b3=-5;

      cout<<"Salah\nNilai = "<<b3<<"\n\n\n";

      }

   cout<<"(4) Gus Dur Adalah Sebutan populer untuk ?\n\n";

   cout<<"a. Abdurrahman Wahid\n";

   cout<<"b. Moh Hatta\n";

   cout<<"c. Soeharto\n";

   cout<<"d. Soekarno\n";

   cout<<"Jawaban : ";

   cin>>d;



      if(d=='a')

      {

       b4=25;

      cout<<"Benar\nNilai = "<<b4<<"\n\n\n";

      }

      else

      {

      b4=-5;

      cout<<"Salah\nNilai = "<<b4<<"\n\n\n\n";

      }

   t=b1+b2+b3+b4;

   cout<<"Total Nilai= "<<t;

getch();

}
