//Program Menghitung Jumlah Kata Pada Kalimat Berformat CamelCase

#include <bits/stdc++.h> //Mencoba header ini yang katanya berisi standar library https://stackoverflow.com/questions/25311011/how-does-include-bits-stdc-h-work-in-c
						 //Walaupun dengan <iostream> saja sudah cukup
using namespace std;

// Menyiapkan Function untuk menghitung jumlah kata pada kalimat berformat CamelCase
int menghitungKata (string kalimat){				

	
	int hitung=1;									//Variabel 'hitung' sebagai variabel pembantu untuk menampung nilai akhir dari perulangan function 
	for(int i=0; kalimat[i]; i++){					//Menghitung jumlah huruf pada 'kalimat' https://www.geeksforgeeks.org/5-different-methods-find-length-string-c/
		if (kalimat[i] >= 'A' && kalimat[i] <= 'Z')	//Mendeteksi huruf Kapital pada index i, bisa dengan menggunakan isupper() https://www.geeksforgeeks.org/check-whether-the-given-character-is-in-upper-case-lower-case-or-non-alphabetic-character/
		hitung++;									//Menambahkan nilai hitung
	}	
	return hitung;
}

int main(){
	string kalimat;
	cout<<"Masukkan kalimatnya: ";					
	cin>>kalimat;									//Mendapatkan input kalimat
	cout<<"Jumlah kata pada kalimat tersebut adalah : "<<menghitungKata(kalimat); //Lokasi Function dieksekusi
	return 0;
}
