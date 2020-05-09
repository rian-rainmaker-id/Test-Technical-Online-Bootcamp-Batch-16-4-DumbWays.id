//Program Mengubah Posisi Array atau ReverseArray

#include <bits/stdc++.h> 
using namespace std; 
  
// Function untuk membalikkan posisi dari array awal sampai ke akhir
void reverseArray(int array[], int awal, int akhir){ 
    while (awal < akhir) 
    { 
        int temp = array[awal];  
        array[awal] = array[akhir]; 
        array[akhir] = temp; 
        awal++; 
        akhir--; 
    }  
}      
  
//Function untuk print Array
void printArray(int array[], int size){ 
   for (int i = 0; i < size; i++) 
   cout << array[i] << " "; 
  
   cout << endl; 
}  
  
//Menggunakan function-function yang telah dibuat
int main(){ 
    int array[] = {19,22,3,28,26,17,18,4,28,0}; 
    
	/* sizeof(array) menampung ukuran total yang ditampung oleh arraynya
	   sedangkan untuk sizeof(array[0]) adalah ukuran dari elemen pertama dalam array
	*/  
    int ukuran = sizeof(array) / sizeof(array[0]);  				
    /* setiap 1 int = 4 bytes
       ukuran array adalah 10, maka : int array[10] = 10 int
       sizeof(array) berarti 4*10 = 40
       sizeof(array[0]) berarti 1 int * 4 = 4
       40/4 = 10, dan itu adalah ukuran dari arraynya
       https://stackoverflow.com/questions/33523585/how-do-sizeofarr-sizeofarr0-work
  	*/
    // Memanggil function untuk menampilkan array semula  
   	cout<<"Array semula adalah : \n";
    printArray(array, ukuran); 
      
    // Memanggil function untuk mengganti posisi array
    reverseArray(array, 0, ukuran-1); 
      
    cout<<"\nArray yang sudah di-reverse yaitu : " << endl; 
      
    // Memanggl function untuk menampilkan array akhir
    printArray(array, ukuran); 
    return 0; 
} 
