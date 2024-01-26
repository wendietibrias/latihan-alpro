#include<iostream>
#include <iomanip>

using namespace std;

int main() {
  

    int previous,result;
    long long  finalRes = 0;

    for(int i = 0; i < 100; i++) {
        if(i == 0) {
            previous = 0;
            cout << i << " ";
        } else if(i == 1) {
            result = 1;
            cout << i << " ";
        } else {
            finalRes = result + previous;
            previous = result;
            result = finalRes;

            printf("%d ",finalRes , " ");
        }
    }

    return 0;
}