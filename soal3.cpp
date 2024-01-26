#include<iostream>

using namespace std;

struct PlnKWH {
    char noPelanggan[10];
    int besarPengunaan;
    float hargaList[3];
    float totalPengunaan;
};

int main() {
    PlnKWH listPelanggan[1];
    int sizePelanggan = sizeof(listPelanggan) / sizeof(listPelanggan[0]);

    for(int i = 0; i < (sizeof(listPelanggan) / sizeof(listPelanggan[0])); i++) {
        cout << "Masukan kode pelanggan: ";
        cin >> listPelanggan[i].noPelanggan;
        cout << "Mauskan besar pengunaan: ";
        cin >> listPelanggan[i].besarPengunaan;
  
        int besaranKwh = listPelanggan[i].besarPengunaan;

        if(besaranKwh > 200) {
            for(int j = 0; j < (sizeof(listPelanggan[i].hargaList) / sizeof(listPelanggan[i].hargaList[0])); j++) {
                switch(j) {
                    case 0:
                    besaranKwh = besaranKwh - 100;
                    listPelanggan[i].hargaList[j] = 500 * 100;
                    break;

                    case 1:
                    besaranKwh = besaranKwh - 100;
                    listPelanggan[i].hargaList[j] = 600 * 100;
                    break;

                    case 2:
                    listPelanggan[i].hargaList[j] = 750 * besaranKwh;
                    break;
                }
            }
        }
      
    }

    for(int k = 0; k <  sizePelanggan; k++) {
        float totalHarga;
         for(int l = 0; l < (sizeof(listPelanggan[k].hargaList) / sizeof(listPelanggan[k].hargaList[0])); l++) {
             totalHarga += listPelanggan[k].hargaList[l];
         }

         listPelanggan[k].totalPengunaan = totalHarga;
         
         cout << "No.pelanggan :  " << listPelanggan[k].noPelanggan << endl;
         cout << "Besar pengunaan : " << listPelanggan[k].besarPengunaan << "KwH" << endl;
         cout << "Total tagihan listrik : Rp " << listPelanggan[k].totalPengunaan;

    }

    return 0;
}