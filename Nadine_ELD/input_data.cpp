#include <iostream>
#include <string>
using namespace std;

int main() {
	int angka;
	float desimal;
	char karakter;

	cout << "Masukkan sebuah angka";
	cin >> angka;
	cout << "Masukkan sebuah karakter;";
	cin >> karakter;
	
	cout << "Angka yang Anda masukkan: " << angka << endl;
	cout << "Desimal yang Anda masukkan: " << desimal << endl;
	cout << "Karakter yang Anda masukkan: " << karakter << endl;
	
	string kalimat;
	cin.ignore();
	cout <<"\nMasukkan sebuah kalimat; ";
	getline(cin, kalimat);
	cout << "nKalimat yang Anda masukkan: " << kalimat << endl;
	return 0;
}


