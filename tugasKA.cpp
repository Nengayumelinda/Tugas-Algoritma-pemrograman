#include <iostream>
using namespace std;

typedef struct{
	string hari;
	string bulan;
	string tahun;
}tanggal;

typedef struct{
	int jam;
	int menit;
	int detik;
}jam;

typedef struct{
	int noKA;
	string kotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotaTujuan;
	jam jamTiba;
	tanggal tanggalTiba;
}jadwalKA;

int main(){
	jadwalKA jadwalKeretaApi;
	
	
	jadwalKeretaApi.noKA=1;
	jadwalKeretaApi.kotaAsalKA="darijogjakarta";
	jadwalKeretaApi.jamBerangkat.jam=10;
	jadwalKeretaApi.jamBerangkat.menit=20;
	jadwalKeretaApi.jamBerangkat.detik=5;
	jadwalKeretaApi.tanggalBerangkat.hari="senin";
	jadwalKeretaApi.tanggalBerangkat.bulan="april";
	jadwalKeretaApi.tanggalBerangkat.tahun="2017";
	jadwalKeretaApi.kotaTujuan="ke bandung";
	jadwalKeretaApi.jamTiba.jam=13;
	jadwalKeretaApi.jamTiba.menit=15;
	jadwalKeretaApi.jamTiba.detik=15;
	jadwalKeretaApi.tanggalTiba.hari="selasa";
	jadwalKeretaApi.tanggalTiba.bulan="april";
	jadwalKeretaApi.tanggalTiba.tahun="2017";
	cout << endl;
	
	cout << "=============================" << endl;
	cout <<"pemberangkatan"<<endl;
	cout << "=============================" << endl;
	cout << "NoKA		:" << jadwalKeretaApi.noKA<<endl;
	cout << "kota Asal	:"<< jadwalKeretaApi.kotaAsalKA<<endl;
	cout << "jam Berangkat	:"<< jadwalKeretaApi.jamBerangkat.jam <<":";
	cout << jadwalKeretaApi.jamBerangkat.menit <<":";
	cout << jadwalKeretaApi.jamBerangkat.detik<<endl;
	cout << "Tanggal berangkat:"<< jadwalKeretaApi.tanggalBerangkat.hari<<"/";
	cout << jadwalKeretaApi.tanggalBerangkat.bulan<<"/";
	cout << jadwalKeretaApi.tanggalBerangkat.tahun<<endl;
	cout << endl;
121
	cout << "Kota tujuan	:"<< jadwalKeretaApi.kotaTujuan<<endl;
	cout << "Jam Tiba	:"<< jadwalKeretaApi.jamTiba.jam <<":";
	cout << jadwalKeretaApi.jamTiba.menit<<":";
	cout << jadwalKeretaApi.jamTiba.detik<<endl;
	cout << "Tanggal Tiba	:"<< jadwalKeretaApi.tanggalTiba.hari<<"/";
	cout << jadwalKeretaApi.tanggalTiba.bulan<<"/";
	cout << jadwalKeretaApi.tanggalTiba.tahun<<endl;
	cout << "===============================" << endl;
	return 0;
}
