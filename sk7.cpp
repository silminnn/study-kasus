#include <iostream>
#include <string.h>
using namespace std;

class Toko{
   public:
      void data();
};

typedef struct{
	int kode, stok;
	char nama[10];
}
   brg;
   brg barang[5];
   brg lok[5];
   brg temp;
   int n, i, b, j, cari, ada;

void Toko::data(){
	
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<">>                       TOKO KELONTONG                          <<"<<endl;
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;

	cout<<"Masukan banyak barang = ";
	cin>>n;

	for(i=0;i<n;i++){
	    cout<<endl;
	    cout<<"Barang ke-"<<(i+1)<<":"<<endl;
	    cout<<"Masukan id Barang    : ";cin>>barang[i].kode;
	    cout<<"Masukan Nama Barang  : ";cin>>(barang[i].nama);
	    cout<<"Masukan Stock Barang : ";cin>>barang[i].stok;
	    }
		cout<<endl;
	    cout<<"Data Barang Anda"<<endl<<endl;
	    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	    cout<<"|   id Barang  |  Nama Barang  | Stock Barang | "<<endl;
	    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;

	    for(i=0;i<n;i++){
	    	cout<<"|      "<<barang[i].kode<<"\t\t"<<barang[i].nama<<"\t\t"<<barang[i].stok<<"     |"<<endl;
	        }
        cout<<endl;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;

          for(i=0;i<n;i++){
             for(j=0;j<n-1;j++){
                if(barang[j].stok < barang[j+1].stok){
                	temp.kode=barang[j].kode;
                    barang[j].kode=barang[j+1].kode;
                    barang[j+1].kode=temp.kode;
	
		          	strcpy(temp.nama,barang[j].nama);
		          	strcpy(barang[j].nama,barang[j+1].nama);
		          	strcpy(barang[j+1].nama,temp.nama);

                	temp.stok=barang[j].stok;
                	barang[j].stok=barang[j+1].stok;
                	barang[j+1].stok=temp.stok;
                    }
                  }
               }
               cout<<endl;
        cout<<endl;

        cout<<"Setelah data diurutkan berdasarkan kode terbesar : "<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        cout<<"|  id Barang  |  Nama Barang  |  Stock Barang  | "<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        for(j=0; j<n; j++){
            cout<<"|       "<<barang[j].kode<<"\t\t"<<barang[j].nama<<"\t\t"<<barang[j].stok<<"     |"<<endl;
        }

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        cout<<endl;
        cout<<"Masukan id Barang Untuk Mencari : ";
        cin>>cari;
        ada = 0;
        for(j=0; j<n; j++){
            if(barang[j].kode==cari){
                    ada=1;
                    
					cout<<endl;
                    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
                    cout<<"|      id Barang   |  Nama Barang   |       Stock Barang    |    "<<endl;
                    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
                    cout<<"|         "<<barang[j].kode<<"\t\t  "<<barang[j].nama<<"\t\t     "<<barang[j].stok<<"\t\t "<<"|"<<endl;
                }
            }
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	if (ada == 0){
		cout<<"Data Tidak ditemukan"<<endl;
	}	
}
int main(){
   Toko kelontong;
   kelontong.data();
   return 0;
}
