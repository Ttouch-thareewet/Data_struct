#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n); 
    vector<int> b(n);
    for(int i=0;i<n;i++){
        int t;
        cin >>t;
        v[i].first = t;
        v[i].second = i;
        
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        b[v[i].second] = i+1;
    }
    for(auto x :b){
        cout <<x<<" ";
    }
}