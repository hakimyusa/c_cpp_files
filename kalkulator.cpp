#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	
	cout<<"===================="<<endl;
	cout<<"Kalkulator Sederhana"<<endl;
	cout<<"===================="<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;
	
	cout<<"Input Pilihan : ";
	cin>>pil;
	cout<<"Input Bilangan Pertama : ";
	cin>>bil1;
	cout<<"Input Bilangan Kedua : ";
	cin>>bil2;	
	
	switch(pil){
	        case 1 : hasil=bil1+bil2;
			operasi='+';
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
	cout<<"============================="<<endl;
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"============================="<<endl;
	
	getch();
}
