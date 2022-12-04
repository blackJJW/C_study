// 범위 기반 for문

#include <iostream>

using namespace std;

int main(){
    int arr[10] = { 3, 1, 2, 3, 4, 5 , 5 , 6, 3, 3};

    for(int n : arr){
        cout << n << endl;
    }
}