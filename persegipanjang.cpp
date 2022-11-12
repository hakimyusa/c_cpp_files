#include<iostream>
using namespace std;
float H_luas(float p, float l);
float H_kel(float p, float l);

float p, l, luas, kel;
int main()
	{
		cout<<" Masukkan panjang persegi panjang p : ";
		cin>>p;
		cout<<" Masukkan lebar persegi panjang l : ";
		cin>>l;
		luas = H_luas(p,l);
		kel  = H_kel(p, l);
		cout<<" luas dari persegi panjang dengan panjang p= "<<p<<" dan lebar l= "<<l<<" adalah"<<luas<<endl;
		cout<<" keliling dari persegi panjang dengan panjang p= "<<p<<" dan lebar l= "<<l<<" adalah"<<kel<<endl;
		
	}
float H_luas(float p, float l);
	{
		luas = p*l;
		return(luas);
	}
float H_kel(float p, float l);
	{
		kel = 2*(p+l);
		return(kel);
	}
