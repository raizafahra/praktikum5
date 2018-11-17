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
