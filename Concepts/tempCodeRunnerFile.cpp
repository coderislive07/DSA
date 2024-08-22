#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int hundreds = 0;
    int fifties = 0;
    int twenties = 0;
    int ones = 0;
    int p = 1;

    while (n != 0) {
        switch (p) {
            case 1:
                hundreds = n / 100;
                n = n - hundreds * 100;
                break;
            case 2:
                fifties = n / 50;
                n = n - fifties * 50;
                break;
            case 3:
                twenties = n / 20;
                n = n - twenties * 20;
                break;
            case 4:
                ones = n / 1;
                n = n - ones * 1;
                break;
        }
        p++;
    }
      cout<<"Hundred notes are "<<hundreds<<endl;
    cout<<"fifties notes are "<<fifties<<endl;
    cout<<"twenties notes are "<<twenties<<endl;
    cout<<"Ones notes are "<<ones<<endl;
}