#include <iostream>
#include "perpus.h"

using namespace std;

int main()
{
    List L;
    int select;
    string b;
    while (b != "N" && select != 0){
        select = 100;
        cout << "======MENU=======" << endl;
        cout << "1. Menambah N data baru" << endl;
        cout << "2. Menampilkan semua data" << endl;
        cout << "3. Menampilkan nama terpanjang" << endl;
        cout << "4. Menampilkan K data pertama yang memuat huruf C diawal" << endl;
        cout << "0. Exit" << endl;
        while (select < 0 || select > 4){
            cout << "Masukan Menu: ";
            cin >> select;
        }

        switch(select){
            case 1:
                {
                    int N;
                    string nama;
                    cout << "jumlah data yang ditambahkan";
                    cin >> N;
                    for (int a = 0; a < N;a++){
                        cout << "Masukan data baru: ";
                        cin >> nama;
                        adr neu = newElement_1301213381(nama);
                        insertLast_1301213381(L, neu);
                    }
                    break;
                }
            case 2:
                {
                    show_1301213381(L);
                    break;
                }

            case 3:
                {
                    cout << info(longestName_1301213381(L)) << endl;
                    break;
                }

            case 4:
                {
                    int k;
                    char c;
                    cout << "Masukan value K: ";
                    cin >> k;
                    cout << "Masukan value C: ";
                    cin >> c;
                    adr hasil = showFirstKName_1301213381(L,k,c);
                    if (hasil == nil){
                        cout << "hasil tidak ada" << endl;
                    }else{
                        cout << info(hasil) << endl;
                    }
                    break;
                }

        }
        while (b != "N" && b != "Y" && select != 0){
            cout << "Kembali ke menu utama?";
            cin >> b;

        }
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
}
