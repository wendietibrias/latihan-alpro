#include<iostream>

using namespace std;

int main() {
    int n = 100;
    int x = 0;

    for(int i = 0; i < n; i++) {
        for(int j = n; j>0; j--) {
            x+=n;
        }
    }

    cout << x;

    return 0;
}