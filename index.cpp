#include <iostream>
using namespace std;

int main() {
    // Make Variable
    int pilih;
    int pilihan;
    float tabungan = 1000;
    int pin;
    string username;
    
    // String Welcome
cout << "\n";
cout << "====== Bank Mini Indonesia ======\n\n" ;
cout << "Selamat datang di Bank Mini. \n";
cout << "Silahkan Login terlebih dahulu. \n" << endl ;

    // Input Username
cout << "Masukkan username : ";
cin >> username;
    // Input Pin 
cout << "Masukkan Pin : ";
cin >> pin ;
cout << endl;

    // Validasi Login
if(username != "master") {
    cout << "Maaf, username tidak dikenal. \n";
    return 0;
} if(pin != 123) {
    cout << "Maaf, Pin anda salah. \n";
    return 0;
} else {
    system("cls");
}
    
    // User Choice
pilih : 
cout << "=== Selamat datang " + username + " === \n";
cout << "Masukkan pilihan anda : \n";
cout << "1. Cek tabungan. \n" ;
cout << "2. Tarik tunai. \n" ;
cout << "3. Isi tabungan. \n" ;
cout << "4. Keluar. \n" ;
cin >> pilihan;
    system("cls");

    // User Input Choice

switch (pilihan)
{
case 1:
    cout << "Tabungan " + username + " sebesar : $" << tabungan << endl;
    cout << "1. Lanjut \n";
    cout << "2. Keluar \n";
    cout << "1/2 : ";
    cin >> pilih;
    if(pilih == 1) {
    system("cls");
    goto pilih;
} if (pilih == 2) {
    goto keluar;
} else {
    goto gagal;
}
    break;
    
float tarikTunai;
case 2 :
cout << "Jumlah uang yang ditarik : $";
cin >> tarikTunai;
if(tarikTunai > tabungan) {
    cout << "Uang anda tidak cukup.";
} else {
    tabungan = tabungan - tarikTunai;
cout << "Silahkan ambil uang anda. \n";
cout << "Sisa uang anda sekarang sebesar : $" << tabungan << endl;
cout << "Terimakasih sudah menggunakan Bank Mini " << username << endl;
cout << "1. Lanjut \n";
cout << "2. Keluar \n";
cout << "1/2 : ";
cin >> pilih;
if(pilih == 1) {
    system("cls");
    goto pilih;
} if (pilih == 2) {
    goto keluar;
} else {
    goto gagal;
}
}
break;

case 3 :
    float addTabungan;
cout << "Jumlah uang yang ingin ditambahkan : $";
cin >> addTabungan;
tabungan = tabungan + addTabungan;
cout << "Tabungan anda sekarang sebesar : $" << tabungan << endl;
cout << "1. Lanjut \n";
cout << "2. Keluar \n";
cout << "1/2 : ";
cin >> pilih;
if(pilih == 1) {
    system("cls");
    goto pilih;
} if (pilih == 2) {
    goto keluar;
} else {
    goto gagal;
}
break;

case 4 :
keluar : 
cout << "Terimakasih sudah menggunakan Bank Mini";
break;

gagal :
default:
    cout << "Gagal, pilihan tidak sesuai";
    break;
}

return pilihan;
}

