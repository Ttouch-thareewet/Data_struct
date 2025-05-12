#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    pair<int,int> pairtemp;
    int n,m,t1,t2,k,d;
    cin >> n>> m;
    for(int i =0 ;i<n;i++){
        cin >> t1 >> t2;
        //pairtemp = {t1,t2};
        v.push_back(t1);
        v.push_back(t2);
    }
    sort(v.begin(),v.end());
    int index;
    for(int i = 0;i<m;i++){
        
        cin >> k;
        auto lower = lower_bound(v.begin(),v.end(),k);
        if(lower == v.end())
        {
            cout <<"0 ";
        }else{
            index = lower - v.begin();
            if(v[index] == k){
                cout <<"1 ";
                continue;
            }
            
            if(index%2==0){
                cout <<"0 ";
            }else{
                cout <<"1 ";
            }
        }
         
    }

}