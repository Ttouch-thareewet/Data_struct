#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,k;
    cin >>  n>> m>>k;
    vector<int> s;
    int t;
    for (int i=0;i<n;i++){
        cin >> t;
        s.push_back(t); 
    }
    sort(s.begin(),s.end()); // 1 3 5 7 9 end
    for (int i=0;i<m;i++){
        int p;
        cin >> p;
        auto lower = lower_bound(s.begin(),s.end(),p-k);
        auto high = lower_bound(s.begin(),s.end(),p+k);
        if(high!= s.end()){
            if(*(high)==p+k ){
            cout << high- lower +1<<" ";
            }else{
            cout << high - lower<<" ";
             }
        }else{
        
            cout << high - lower<<" ";
        }
            
        


    }
}