# praktikum5


## latihan1 : Membuat fungsi sederhana

**alur algoritma**
1. Mulai program fungsi sederhana dengan menggunakan void
2. Deklarasikan fungsi menggunakan void dengan nama fungsi yang ingin kita masukan (void ganjilgenap())
3. Masukan rumus yang ingin kita jadikan fungsi sederhana

**kode lengkap program**
```
#include<iostream>
using namespace std;

void ganjilgenap(){

    int angka,hasil;

    cout<< "masukan bilangan: ";
    cin>> angka;
    cout << endl;

    hasil=angka % 2;

    if(hasil == 0){

        cout<< angka << " sama dengan bilangan genap" << endl;

    }else{

        cout<< angka << " sama dengan bilangan ganjil" << endl;
    }
}
    int main(){
        ganjilgenap();

    return 0;

    }
```

## latihan2 : Mengembangkan aplikasi dengan membuat fungsi dari hasil praktikum sebelumnya menjadi satu aplikasi dengan menampilkan menu pilihan

**alur algoritma**
1. Mulai program fungsi dengan menggunakan void
2. Deklarasikan praktikum yang ingin kita jadikan kumpulan fungsi di nama fungsi setelah type data ```void terbesar(): void``` ```urut_data: ```
3. Gunakan rumus do while untuk mengulang swicth dan case untuk memilih program pada saat di jalankan 
4. Masukan program/data dari praktikum sebelumnya kedalam satu file fungsi

**kode lengkap program**
```
#include<iostream>
using namespace std;

void terbesar();
void urut_data();

int main(){

    int a;

    do {

        //system("clear")
        cout << "============================================\n";
        cout << "                MENU PILIHAN                \n";
        cout << "============================================\n";
        cout << "program apa yang ingin anda gunakan? " << endl;
        cout << "input angka dari prograam di bawah ini " << endl;
        cout << " \n";
        cout << "1. menentukan bilangan terbesar\n";
        cout << "2. mengurutkan bilangan dari yang terkecil\n";
        cout << "0. keluar\n";
        cout << "============================================\n";
        cout << "masukan di sini ---> ";
        cin >> a;

        switch(a){
            case 1:
                terbesar();
                break;
            case 2:
                urut_data();
                break;
            }
    }while(a != 0);
}

void terbesar(){
    int n=0;
    int max=0;

    do {
       cout << "masukan bilangan ( masukan 0 untuk berhenti ) :" ;
       cin >> n;

    if ( n > max )
        max = n;

    } while ( n != 0 ) ;

    cout << "bilangan terbesar adalah " << max;

}

void urut_data(){
int a, b, c;

    cout << "masukan bilangan 1: ";
    cin >> a;
    cout << "masukan bilangan 2: ";
    cin >> b;
    cout << "masukan bilangan 3: ";
    cin >> c;

    if (a < b){
        if(b < c)
            cout << "urutan bilangan: " << a << ", " << b << ", " << c << endl;
        else {
            if(a < c)
                cout << "urutan bilangan: " << a << ", " << c << ", " << b << endl;
            else
                cout << "urutan bilangan: " << c << ", " << a << ", " << b << endl;
    }

    }    else {
            if (a < c)
                cout << "urutan bilangan: " << b << ", " << a << ", " << c << endl;
            else {
                if (b < c)
                    cout << "urutan bilangan: " << b << ", " << c << ", " << a << endl;
                else
                    cout << "urutan bilangan: " << c << ", " << b << ", " << a << endl;
            }
        }


}

```

## latihan3 : Kembangkan aplikasi dengan menggunakan file header (memisahkan fungsi kedalam file terpisah)

**alur algoritma**
1. Mulai program fungsi dengan menggnakan header untuk memanggil fungsi
2. Deklarasikan fungsi yang terdapat dalam file berbeda praktikum yang ingin kita jadikan kumpulan fungsi untuk membuat header untuk di panggil dalam file lain
3. Gunakan rumus do while untuk mengulang swicth dan case untuk memilih program pada  saat di jalankan 
4. Masukan program/data dari praktikum sebelumnya kedalam satu file yang berbeda untuk file header fungsi

**kode lengkap program**
```
#ifndef FUNGSI1_H_INCLUDED
#define FUNGSI1_H_INCLUDED

using namespace std;

void Nilai_terbesar_4(){

    int a,b,c,d;

        cout << "masukan bilangan 1: ";
        cin >> a;
        cout << "masukan bilangan 2: ";
        cin >> b;
        cout << "masukan bilangan 3: ";
        cin >> c;
        cout << "masukan bilangan 4: ";
        cin >> d;

        if (a>b && a>c && a>d)
            cout << "bilangan terbesar adalah: " << a <<endl;
       else if (b>a && b>c && b>d)
            cout << "bilangan terbesar adalah: " << b <<endl;
       else if (c>a && c>b && c>d)
            cout << "bilangan terbesar adalah: " << c <<endl;
       else
            cout << "bilangan terbesar adalah: " << d <<endl;
    }


void Nilai_terbesar_3(){

    int A,B,C;

    cout << "masukan bilangan 1: ";
    cin >> A;
    cout << "masukan bilangan 2: ";
    cin >> B;
    cout << "masukan bilangan 3: ";
    cin >> C;

    if (A > B)  {
        if (A > C)
        cout << "bilangan terbesar adalah: " << A << endl;
        else
        cout << "bilangan terbesar adalah: " << C << endl;

   } else {
        if (B > C)
        cout << "bilangan terbesar adalah: " << B << endl;
        else
        cout << "bilangan terbesar adalah: " << C << endl;
    }

}


void Jenis_segitiga(){

    int a, b, c;
    cout<<"bilangan ke-1: ";
    cin>> a;
    cout<<"bilangan ke-2: ";
    cin>> b;
    cout<<"bilangan ke-3: ";
    cin>> c;
    if (a==b)
    {
        if (a==c)
            cout << "Segitiga Sama Sisi" << endl;
        else
            cout << "Segitiga Sama Kaki" << endl;
    }else{
        if (a==c)
            cout << "Segitiga Sama Kaki" << endl;
        else
    {
        if (b==c)
            cout << "Segitiga Sama Kaki" << endl;
        else
            cout << "segitiga Sembarang" << endl;
    }
    }

}


void Program_kasir(){

    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                   Selamat datang " << endl;
    cout << "                         di " << endl;
    cout << "                   Green Market" ;
    cout << endl;
    cout << endl;
    cout << "--------------------------------------------------------- " << endl;
    cout << "--------------------------------------------------------- " << endl;
    cout << endl;
    cout << "Berapa macam barang yang akan Anda beli? " << endl;
    cin >> N;
    cout << endl;

    do {
        cout << "Berapa barang yang akan Anda beli? " << endl;
        cin >> a;
        cout << endl;
        cout << "Berapa harga per satuan barang yang Anda beli? " << endl;
        cin >> b;
        cout << endl;

        hb = a * b;
        stotal = stotal+hb;
        e = e+a;
        i = i+1;

        cout << endl;
        cout << "Harga barang tesebut adalah " << hb << endl;

        if (i < N) {
            cout  << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli " << endl;
        } else {
            cout << "Anda telah membeli " << N << " barang ";
        }

        cout << endl;
        cout << endl;

        } while (i < N) ;

        if (stotal >= 1000000) {
            dis = (stotal/100)*10;
            total = stotal-dis;
            d = 10;
        } else {
            if (stotal > 500000){
                dis = (stotal/100)*5;
                total = stotal-dis;
                d = 5;
            } else {
                total = stotal;
                d = 0;
            }

        }

        cout << "--------------------------------------------------------- " << endl;
        cout << "--------------------------------------------------------- " << endl;
        cout << endl;

        cout << "Jumlah item: " << N << endl;
        cout << "jumlah barang: " << e << endl;
        cout << "Total belanja: " << stotal << endl;
        cout << "Dicount: " << d << " % " << endl;
        cout << "Total: " << total << endl;
        cout << endl;
        cout << endl;
        cout << "                               Terima kasih " << endl;
        cout << "                          Selamat datang kembali" ;
    }






#endif // FUNGSI1_H_INCLUDED
```

***file yang memanggil fungsi**
```
#include<iostream>
#include"fungsi1.h"

using namespace std;

int main(){

    int a;

    do{


        cout << "====================================\n";
        cout << "            MENU PILIHAN            \n";
        cout << "====================================\n";
        cout << "1. Nilai_terbesar_dari_4_bilangan   \n";
        cout << "2. Nilai_terbesar_dari_3_bilangan   \n";
        cout << "3. jenis_segitiga                   \n";
        cout << "4. Program_kasir                    \n";
        cout << "0. keluar                           \n";
        cout << "====================================\n";
        cout << "masukan disini --->                 \n";
        cin >> a;

        switch (a) {

        case 1 :
            Nilai_terbesar_4();
            break;
        case 2 :
            Nilai_terbesar_3();
            break;
        case 3 :
            Jenis_segitiga();
            break;
        case 4 :
            Program_kasir();
            break;



        }

    } while (a != 0);

}
```