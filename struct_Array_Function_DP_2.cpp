#include "stdio.h"
#include "conio.h"
#include "iostream"

using namespace std;
main()
{
int x, y;
int i,j;

float diskon(int x, int y);
struct
{
   char kd_brg, nm_brg[35];
   float harga, disk, sub, total;
 
}brg[8];

cout<<"Masukan Jumlah Pembelian     :";cin>>j;
cout<<endl;
for(i=1; i<=j; i++)
{
cout<<"Data Pembelian Ke-"<<i<<endl;
cout<<"Masukan Kode Barang  :";cin>>brg[i].kd_brg;
cout<<"Masukan Jumlah Beli  :";cin>>brg[i].jml;
cout<<endl;
}
//clrscr();
cout<<"=========================================================="<<endl;
cout<<"No Kode     Nama   Harga	 Jumlah  Subtotal  Diskon  Total "<<endl;
cout<<"   Barang   Barang                                        "<<endl;
cout<<"=========================================================="<<endl;
for(i=1; i<=j; i++)
{
cout<<setiosflags(ios::left)<<setw(3)<<i;
cout<<setiosflags(ios::left)<<setw(15)<<brg[i].kd_brg;
if(brg[i].kd_brg=='A'||brg[i].kd_brg=='a')
	{
		strcpy(brg[i].nm_brg,"Buku Tulis ");
		brg[i].harga=6000;
	}
else if(brg[i].kd_brg=='B'||brg[i].kd_brg=='b')
	{
		strcpy(brg[i].nm_brg,"Pulpen     ");
		brg[i].harga=3500;
	}
else if(brg[i].kd_brg=='C'||brg[i].kd_brg=='c')
	{
		strcpy(brg[i].nm_brg,"Penggaris  ");
		brg[i].hrga=2500;
	}
else if(brg[i].kd_brg=='D'||brg[i].kd_brg=='d')
	{
		strcpy(brg[i].nm_brg,"Penghapus  ");
		brg[i].harga=1000;
	}	
cout<<setiosflags(ios::left)<<setw(6)<<brg[i].nm_brg;
cout<<setiosflags(ios::left)<<setw(20)<<brg[i].harga;
cout<<setiosflags(ios::left)<<setw(9)<<brg[i].jml;
cout<<setiosflags(ios::left)<<setw(9)<<brg[i].sub
disk=diskon(brg[i].jml,brg[i].harga);
cout<<setiosflags(ios::left)<<setw(8)<<brg[i].disk;
brg[i].total=(brg[i].jml*brg[i].harga)-brg[i].disk;
cout<<setiosflags(ios::left)<<setw(8)<<total<<endl;
cout<<endl;
}
getch();
}

float diskon(int x)
{
	float z;
	if(x>7)
   	z = 0.1*x*y; 
   else
    z = 0;
   	return z;
}
