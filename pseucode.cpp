#include <iostream>
using namespace std;

    int main()
    {
     float r,t;
     float Volume, Luas;
     float Pi;
     Pi = float(22)/7;
     
    
     cout <<" Masukan Jari-jari Lingkaran : ";
     cin >> r;
     cout <<" Masukan Tinggi Tabung : ";
     cin >> t;
     Volume = Pi*r*r*t;
     cout <<" Volume Tabung adalah         : "<< Volume <<endl;
     return 0;
    }
