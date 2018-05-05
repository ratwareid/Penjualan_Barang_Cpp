#include<iostream>
#include<conio.h>

using namespace std;
struct barang {
	const char* paket;
	const char* detail;
	int 		harga;
	};
			
int main()
{
struct barang keranjang[0];
const char* paket[2] = {"PC Gaming AMD",
				 		"PC Gaming Intel"};
const char* detail[2]= {"AMD Ryzen 5,HDD 500GB,Mobo AM4,VGA RX Vega,Ram 16Gb",
				 "Intel Kabylake,HDD 500 GB,Mobo H110M,VGA GTX 1080Ti,Ram 16Gb"};
int harga[2]= {5000000,7000000};

int elemen,nomor;
char beli;
int n = 1;

cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
cout<<"-=-=-=-=-=-=-=-Selamat Datang di Toko Sparepart Komputer-=-=-=-=-=-=-=-="<<endl;
cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl<<endl;
cout<<"-=-=-=-=-=Program Ini Akan Menampilkan Harga Barang Yang Tersedia-=-=--="<<endl<<endl;

do {
	cout<<endl<<"Silahkan Masukkan Nomor Untuk Memilih Menu:"<<endl<<endl;
	
	for (elemen=0;elemen <=1;elemen++)
		{
			cout <<elemen<< "." << paket[elemen]<<endl;
		}
	cout <<"98 Untuk Melihat Keranjang Belanja" <<endl;
	cout <<"99 Untuk Exit Program" <<endl<<endl;
	
	cout<<"Masukkan nomor : "; 
	cin>>nomor;
	cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
	if (nomor == 0)
	{
		 cout <<"Spesification: "<<endl<<endl<<detail[0]<<endl<<endl;
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
			 cout<<"Harga Rp: "<<harga[0]<<endl<<endl;
			 cout<<"Tambah ke keranjang belanja (Y/N) ? ";
			 cin >>beli;
			 if (beli =='y' || beli =='Y')
			 {
				keranjang[n].paket = detail[0];	
				keranjang[n].harga  = harga[0];
				cout <<"########## Berhasil memasukkan barang ke keranjang Belanja ##########"<<endl<<endl;
				n = n + 1;
			 }
			 cout<<"Press key to continue....\n"<<endl<<endl<<endl<<endl<<endl;
			 getch();
	}
	else if (nomor == 1)
		{
			 cout <<"Spesification: "<<endl<<endl<<detail[1]<<endl<<endl;
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl;
			 cout <<"Harga Rp: "<<harga[1]<<endl<<endl;
			 cout <<"Tambah ke keranjang belanja (Y/N) ? ";
			 cin >>beli;
			 if (beli =='y' || beli =='Y')
			 {
				keranjang[n].paket = detail[1];	
				keranjang[n].harga  = harga[1];
				cout <<"########## Berhasil memasukkan barang ke keranjang Belanja ##########"<<endl<<endl;
				n = n + 1;
			 }
			 cout<<"Press key to continue....\n"<<endl<<endl<<endl<<endl<<endl;
			 getch();
		}
		
	else if (nomor == 98)
		{
		cout <<"-=-=-=-=-=-=-=-=-Daftar Barang dalam Keranjang Belanja-=-=-=-=-=-=-=--="<<endl;
		if (n < 1)
		{
			cout<<"Keranjang Belanja Kosong ......"<<endl;
			getch();
		}
		else 
		{
			for (int j=1; j<n; j++ )
			{
			cout<<"Keranjang ke "<<j<<endl;
			cout<<"Detail barang : "<<keranjang[j].paket<<endl;
			cout<<"Harga : "<<keranjang[j].harga<<endl;
			cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
			}
			cout<<"Press key to continue....\n"<<endl<<endl<<endl<<endl<<endl;
			getch();
		}
		}
	else if (nomor == 99)
		{
		cout <<" Program telah berhenti"<<endl;
		return 0;
		}
	
	else 
		{
		cout <<"Input yang anda masukkan salah"<<endl;
		return 0;
		}
		
}while (nomor == 0 || nomor == 1 || nomor == 98); //Jika input 0 atau 1 atau 98 maka program akan mengulang lagi

}
