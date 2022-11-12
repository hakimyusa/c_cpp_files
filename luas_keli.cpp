#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	
	cout<<"========================================="<<endl;
	cout<<"Menghitung Luas dan Keliling Bangun Ruang"<<endl;
	cout<<"========================================="<<endl;
	cout<<"1. Persegi"<<endl;
	cout<<"2. Segitiga"<<endl;
	cout<<"3. Lingkaran"<<endl;
	cout<<endl;
	
	cout<<"Input Pilihan : ";
	cin>>pil;
	
	switch(pil){
	        case 1 :
	        	 int s,luas, keli;

    cout<<"Input Sisi Persegi : ";
    cin>>s;

    luas=s*s;
    keli=4*s;
    cout<<"==========================="<<endl;
    cout<<"Luas Persegi adalah : "<<luas<<endl;
    cout<<"Keliling Persegi adalah : "<<keli<<endl;
			break;
			
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		default :
			cout<<"Coba input ulang "<<endl;
	}
	getch();
}
