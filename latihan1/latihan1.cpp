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
