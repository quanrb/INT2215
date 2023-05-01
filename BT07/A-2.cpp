#include <iostream>
using namespace std;

void print_size(int a[], int n){
    cout << sizeof(a)/sizeof(int);
}

int main(){
    int SIZE;
    cin >> SIZE;
    int a[SIZE];
    cout << sizeof(a)/sizeof(int) << " ";
    print_size(a, SIZE);
}