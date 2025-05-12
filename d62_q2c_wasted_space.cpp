#include <iostream>
using namespace std;
int main(){
    int n,size=1;
    cin  >> n;
    while(size<n){

        size*=2;
    }
    cout << size - n;
}