#include<iostream>

using namespace std;

int main() {

    int matriks1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matriks2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int resultMatriks[3][3];

    int sizeMatriks1 = sizeof(matriks1) / sizeof(matriks1[0]);
    int sizeMatriks2 = sizeof(matriks2)/sizeof(matriks2[0]);

    for(int i = 0; i < sizeMatriks1; i++) {
        for(int j = 0; j < sizeMatriks2; j++) {
            resultMatriks[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    cout << "[";
    for(int k = 0; k < sizeMatriks1; k++) {
        for(int l = 0; l < sizeMatriks2; l++) {
            cout << resultMatriks[k][l] << " ";
        }
        if(k < 2) {
            cout << endl;
        }
    }
    cout << "]";

    return 0;
}