#include <iostream>
#include <conio.h>

using namespace std;

//Prototipe Fungsi :
double HitungLuas(double, double);
double HitungKeliling(double, double);
void Tampilkan_Hasil(double, double);
void CetakBaris();
void Tampilkan_Hasil_II(double, double);

int main()
{
	double Panjang, Lebar;
	double LuasPP, KelilingPP;
	
	//CONTOH BAGIAN I
	CetakBaris(); cout << "MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG" << endl; CetakBaris();
	cout << "Masukkan Nilai Panjang  : "; cin >> Panjang;
	cout << "Masukkan Nilai Lebar    : "; cin >> Lebar;
	cout << endl;
	Tampilkan_Hasil(Panjang, Lebar);
	cout << endl << "(Fungsi pada program diatas menggunakan prototipe fungsi terlebih dahulu)" << endl << endl;

	//CONTOH BAGIAN II
	CetakBaris(); cout << "MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG (Contoh II)" << endl; CetakBaris();
	cout << "Masukkan Nilai Panjang  : "; cin >> Panjang;
	cout << "Masukkan Nilai Lebar    : "; cin >> Lebar;
	cout << endl;

	LuasPP = Panjang * Lebar;
	KelilingPP = 2 * (Panjang + Lebar);

	Tampilkan_Hasil_II(LuasPP, KelilingPP);
	   
	_getch();
	return 0;
}

// Fungsi Menghitung Luas
double HitungLuas(double P, double L)
{
	double Luas;
	Luas = P * L;
	return Luas;
}

//Fungsi Menghitung Keliling
double HitungKeliling(double P, double L)
{
	double Keliling;
	Keliling = (2 * P) + (2 * L);
	return Keliling;
}

//Fungsi Untuk Menampilkan Hasil Luas dan Keliling
void Tampilkan_Hasil(double P, double L)
{
	cout << "Luas       = " << HitungLuas(P, L) << endl;
	cout << "Keliling   = " << HitungKeliling(P, L) << endl;
}

void CetakBaris()
{
	for (size_t i = 0; i <= 57; i++)
	{
		cout << "-";
	}
	cout << endl;
}

//Fungsi Void untuk Contoh Bagian II
void Tampilkan_Hasil_II(double Luas, double Keliling)
{
	cout << "Hasil Luas       = " << Luas << endl;
	cout << "Hasil Keliling   = " << Keliling << endl;
}