#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
const char* paket[2] = {
						"PC Gaming AMD",
						"PC Gaming Intel", 
						};
const char* detail[6]= {"AMD Ryzen 5,HDD 500GB,Mobo AM4,VGA RX Vega,Ram 16Gb",
						"Intel Kabylake,HDD 500 GB,Mobo H110M,VGA GTX 1080Ti,Ram 16Gb"
					   };
int harga[2]= {5000000,7000000};
int elemen,nomor;
char beli;

cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
cout<<"-=-=-=-=-=-=-=-Selamat Datang di Toko Sparepart Komputer-=-=-=-=-=-=-=-="<<endl;
cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl<<endl;
cout<<"-=-=-=-=-=Program Ini Akan Menampilkan Harga Barang Yang Tersedia-=-=--="<<endl<<endl;

do {
	cout<<"Silahkan Masukkan Nomor Untuk Melihat Detail Barang:"<<endl<<endl;
	
	for (elemen=0;elemen <= 1;elemen++)
		{
			cout <<elemen<< "." << paket[elemen]<<endl;
		}
	cout <<"98 Untuk Melihat Keranjang Belanja" <<endl;
	cout <<"99 Untuk Exit Program" <<endl<<endl;
	
	cout<<"Masukkan nomor : "; 
	cin>>nomor;
	cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
	cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
	if (nomor == 0)
	{
		 cout <<"Spesification: "<<endl<<endl<<detail[0]<<endl<<endl;
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
			 cout<<"Harga Rp: "<<harga[0]<<endl<<endl;
			 cout<<"Tambah ke keranjang belanja (y/n)?  ";
			 cin >>beli;
			 if (beli =='y' || beli =='Y')
			 {
				//Masukkan array ke struct	
				cout <<"Berhasil memasukkan barang ke keranjang Belanja"<<endl;
			 }
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl<<endl;
	}
	else if (nomor == 1)
		{
			 cout <<"Spesification: "<<endl<<endl<<detail[1]<<endl<<endl;
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
			 cout <<"Harga Rp: "<<harga[1]<<endl<<endl;
			 cout <<"Tambah ke keranjang belanja (y/n)?  ";
			 cin >>beli;
			 if (beli =='y' || beli =='Y')
			 {
				//Masukkan array ke struct	
				cout <<"Berhasil memasukkan barang ke keranjang Belanja"<<endl;
			 }
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl<<endl;
		}
		
	else if (nomor == 99)
		{
		cout <<" Program telah berhenti"<<endl;
		return 0;
		}
	
	else 
		cout <<"Input yang anda masukkan salah"<<endl;
		
}while (nomor == 0 || nomor == 1); //Jika input 0 atau 1 maka program akan mengulang lagi

}
