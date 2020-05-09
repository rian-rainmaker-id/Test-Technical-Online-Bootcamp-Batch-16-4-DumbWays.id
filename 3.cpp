//Program Menggambar suatu Pola

#include <bits/stdc++.h>
using namespace std;

//Membuat function
void gambar(){
	int tinggi, panjang, x, y;
	
	cout<<"Masukkan tinggi gambar: ";
	cin>>tinggi;
	
	panjang = tinggi *3;
	
	for (y = tinggi; y >= 1; y--){		  	 //Mengatur berapa banyak baris dibuat
		for (x = 0; x < panjang; x++){		
			if (x <= y-1 || x >= tinggi + y) //Mengatur karakter untuk menampilkan " (spasi)" dan "*"
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<"\n";
	}
}

//Panggil function

int main(){
	gambar();
}
