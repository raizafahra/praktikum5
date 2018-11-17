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

