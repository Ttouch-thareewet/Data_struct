#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    if(n==1){
        cout << 0;
        
        return 0;
    }
    n--;
    if(k==1){
        cout << n;
        return 0;
    }
    long long count =0;
    while(n!=0){
        n = (n-1) / k;
        count++;
    }
    cout << count;

}