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
