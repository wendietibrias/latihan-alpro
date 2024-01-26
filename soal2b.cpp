#include<iostream>

using namespace std;

int main() {
    //mencari determinan
    int matriks1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matriks2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sizeMatriks =  sizeof(matriks1) / sizeof(matriks2[0]);
    int determinan = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < sizeMatriks; j++) {
            
        }
    }

    return 0;
}