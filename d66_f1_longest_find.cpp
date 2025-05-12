#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    vector<int> value(n),status(n); // 0 empty 1 Once has data  2 has value
    int max1 = 1 ;
    for(int i=0;i<m;i++){
        int k,v;
        cin >> k >> v;
        if(k==1){
            int j = 0 ;
            int root = v % n ;
            while(status[(root+j*j)%n]==2){
                j++;
            }
            if(j>max1) max1 = j; //cout j+1
            value[(root+j*j)%n] = v;
            status[(root+j*j)%n] = 2;     

        }else if(k==2){
            int j = 0 ;
            int root = v % n ;
            while(status[(root+j*j)%n]==2){
                if(value[(root+j*j)%n]==v){
                    status[(root+j*j)%n] = 1;
                    break;
                }
                j++;
            }
             
        }
    }
}