#include<iostream>

using namespace std;

int main() {
    //perkalian matriks
    int matriks1[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int matriks2[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int hasilMatriks[3][3];
    int sizeMatriks = (sizeof(matriks1) / sizeof(matriks1[0]));

    for(int i = 0;  i < sizeMatriks; i++) {
        int filledIndex = 0;
        int col = 0;

         for(int j = 0; j < sizeMatriks; j++) {
            int result = 0;
            int row = 0;
            col = j;

            for(int k = 0; k < sizeMatriks; k++) {
                result += matriks1[i][k] * matriks2[row][col];
                row+=1;
            }
            
            hasilMatriks[i][filledIndex] = result;
            filledIndex+=1;
         }

    }

    for(int l = 0; l < sizeMatriks; l++) {
        for(int z = 0; z < sizeMatriks; z++) {
            cout << hasilMatriks[l][z] << " ";
        }
        cout << endl;
    }

    return 0;
}

