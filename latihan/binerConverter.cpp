#include<iostream>
#include<cmath>

using namespace std;

string decimalToBiner() {
    int decimal;
    string result = "";
  
    cout << "masukan angka desimal : ";
    cin >> decimal;

    int hasilBagi = decimal;

    do {
        int sisaBagi = hasilBagi % 2;
        result = to_string(sisaBagi) + result;
        hasilBagi = floor(hasilBagi / 2);
    } while(hasilBagi > 0);

    return result;
}

int main() {
    char biner[];

    return 0;
}