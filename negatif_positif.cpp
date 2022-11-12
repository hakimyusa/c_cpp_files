#include <iostream>
using namespace std;

int main(){

    int angka;
	cout<<"Input Angka : ";
    cin>>angka;
    if(angka > 0){
        cout<<"Anda Menginput Bilangan Positif";
    }else if(angka == 0){
        cout<<"Anda Menginput Angka 0";
    } else{
        cout<<"Anda Menginput Bilangan Negatif";
    }
    return 0;
}
