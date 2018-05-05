#include<iostream> //library cin & cout
#include<conio.h> // library getch
 
using namespace std; // mempersingkat penulisan std::cin menjadi cin & std::cout menjadi cout
struct barang {  // define struct barang
	const char* paket;  // define element paket sebagai const char*
	const char* detail; // const char* berfungsi untuk char yang lebih dari 1 huruf
	int 		harga; // define harga sebagai integer
	};
			
int main()
{
struct barang keranjang[0]; // struct barang dengan element keranjang
const char* paket[2] = {"PC Gaming AMD", //nilai paket[0] = pc gaming amd
				 		"PC Gaming Intel"}; //nilai paket [1] = pc gaming intel
const char* detail[2]= {"AMD Ryzen 5,HDD 500GB,Mobo AM4,VGA RX Vega,Ram 16Gb", //nilai detail [0]
				 		"Intel Kabylake,HDD 500 GB,Mobo H110M,VGA GTX 1080Ti,Ram 16Gb"}; // nilai detail [1]
int harga[2]= {5000000,7000000}; // define array harga dengan 2 nilai

int elemen,nomor; // define elemen dan nomor as integer
char beli; // define beli sebagai char
int n = 1; // define n sebagai integer bernilai 1 , n disini sebagai counter barang 

cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl; // output text berikut
cout<<"-=-=-=-=-=-=-=-Selamat Datang di Toko Sparepart Komputer-=-=-=-=-=-=-=-="<<endl;
cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl<<endl;
cout<<"-=-=-=-=-=Program Ini Akan Menampilkan Harga Barang Yang Tersedia-=-=--="<<endl<<endl; 

do {
	cout<<endl<<"Silahkan Masukkan Nomor Untuk Memilih Menu:"<<endl<<endl; // output text berikut
	
	for (elemen=0;elemen <=1;elemen++) // menampilkan list nomor dari 0 sampai dengan 1
		{
			cout <<elemen<< "." << paket[elemen]<<endl; // output paket[0] sampai paket [1]
		}
	cout <<"98 Untuk Melihat Keranjang Belanja" <<endl; // output text berikut
	cout <<"99 Untuk Exit Program" <<endl<<endl; // output text berikut
	
	cout<<"Masukkan nomor : ";  // output text berikut
	cin>>nomor; // memasukkan  nilai hasil input ke dalam variabel nomor
	cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl; // output text berikut
	if (nomor == 0) // Jika nomor = 0 , jalankan proses berikut :
	{
			 cout <<"Paket: "<<paket[0]<<endl<<endl; // menampilkan nilai paket [0]
		 	 cout <<"Spesification: "<<endl<<endl<<detail[0]<<endl<<endl; // menampilkan nilai detail [0]
			 cout<<"Harga Rp: "<<harga[0]<<endl<<endl; // menampilkan nilai harga [0]
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl; // output text berikut
			 cout<<"Tambah ke keranjang belanja (Y/N) ? "; // output text berikut
			 cin >>beli; // memasukkan nilai hasil input ke variabel beli
			 if (beli =='y' || beli =='Y') // jika beli = y
			 {
				keranjang[n].paket  = paket[0];	// masukkan nilai var paket [0] ke var keranjang[n].paket
				keranjang[n].detail = detail[0];	// masukkan nilai var detail [0] ke var keranjang[n].detail
				keranjang[n].harga  = harga[0]; // masukkan nilai var harga [0] ke var keranjang[n].harga
				cout <<"-=-=-=-=-= Berhasil memasukkan barang ke keranjang Belanja -=-=-=-=-="<<endl<<endl;
				n = n + 1; // tambahkan n + 1 , sebagai counter barang
			 }
			 cout<<"Press key to continue....\n"<<endl<<endl<<endl<<endl<<endl;
			 getch(); // pemberi jeda
	}
	else if (nomor == 1)
		{
			 cout <<"Paket: "<<paket[1]<<endl<<endl; // menampilkan nilai paket [1]
		 	 cout <<"Spesification: "<<endl<<endl<<detail[1]<<endl<<endl; // menampilkan nilai detail [1]
			 cout<<"Harga Rp: "<<harga[1]<<endl<<endl; // menampilkan nilai harga [1]
			 cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-="<<endl; // output text berikut
			 cout<<"Tambah ke keranjang belanja (Y/N) ? "; // output text berikut
			 cin >>beli; // memasukkan nilai hasil input ke variabel beli
			 if (beli =='y' || beli =='Y') // jika beli = y
			 {
				keranjang[n].paket  = paket[1];	// masukkan nilai var paket [1] ke var keranjang[n].paket
				keranjang[n].detail = detail[1];	// masukkan nilai var detail [1] ke var keranjang[n].detail
				keranjang[n].harga  = harga[1]; // masukkan nilai var harga [1] ke var keranjang[n].harga
				cout <<"-=-=-=-=-= Berhasil memasukkan barang ke keranjang Belanja -=-=-=-=-="<<endl<<endl;
				n = n + 1; // tambahkan n + 1 , sebagai counter barang
			 }
			 cout<<"Press key to continue....\n"<<endl<<endl<<endl<<endl<<endl;
			 getch(); // pemberi jeda
		}
		
	else if (nomor == 98) // Jika nomor = 98 , tampilkan daftar keranjang
		{
		cout <<"-=-=-=-=-=-=-=-=-Daftar Barang dalam Keranjang Belanja-=-=-=-=-=-=-=--="<<endl;
		if (n < 1) // jika n < 1 maka :
		{
			cout<<"Keranjang Belanja Kosong ......"<<endl; // tampilkan output berikut
			getch();
		}
		else  // jika n tidak < 1
		{
			for (int j=1; j<n; j++ ) // tampilkan list keranjang sebanyak jumlah n
			{
			cout<<"Keranjang ke "<<j<<endl; // menampilkan nomor keranjang
			cout<<"Paket : "<<keranjang[j].paket<<endl; // menampilkan paket
			cout<<"Detail barang : "<<keranjang[j].detail<<endl; // menampilkan detail
			cout<<"Harga : "<<keranjang[j].harga<<endl; // menampilkan harga
			cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
			}
			cout<<"Press key to continue....\n"<<endl<<endl<<endl<<endl<<endl;
			getch();
		}
		}
	else if (nomor == 99) // jika nomor = 99
		{
		cout <<" Program telah berhenti"<<endl; // tampilkan output berikut 
		return 0; // mengakhiri program
		}
	
	else // jika input yang dimasukkan berbeda selain yang disebutkan diatas
		{
		cout <<"Input yang anda masukkan salah"<<endl;  // tampilkan text berikut
		return 0; // akhiri program
		}
		
}while (nomor == 0 || nomor == 1 || nomor == 98); //Jika input 0 atau 1 atau 98 maka program akan mengulang lagi

} // penutup main()
