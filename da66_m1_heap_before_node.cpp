#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,f;
    cin >> n >> f;

    if(f==0){
        cout << 0<<endl;
        return 0;
    }
    vector<int> s(n),r;
    s[0] = 1;
    s[f] = 0;
    for(int i=0;i<n;i++){
        if(i==f){
            continue;
        }
        int p =  (i-1)/2;

        if(s[p]==1){
            r.push_back(i);
            s[i]=1;
        }else{
            s[i]=0;
        }
    }
    cout << r.size()<<endl;
    for(auto v : r){
        cout << v<< ' ';
    }

}