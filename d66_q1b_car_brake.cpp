#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,m,k,a,b;
    cin >> n >> m >> k;
    vector<pair<int,int>> br;
    vector<int> q2;
    //map<int,int> m ; //m[u] = time;
    for(int i =0;i<n;i++){
        cin >> a>>b;
        br.push_back(make_pair(a,b));
    }
    sort(br.begin(),br.end());
    // m[k] = 0;
    // m[br[0].second] = br[0].first;
    q2.push_back(k);
    for(int i =1;i<n;i++){
        br[i].second += br[i-1].second;
        q2.push_back(br[i].second);
    }
    // for(auto f:br){
    //     cout << f.first <<"tt"<<f.second<<endl;
    // }
    // 5 10 7 10 -> 5 10 6 15 7 20
    for(int i = 0;i<m;i++){
        cin >> a>>b;
        if(a==1){
            if(b<br[0].first){
                cout << k<<endl;
                continue;
            }
            auto it = lower_bound(br.begin(),br.end(),make_pair(b,0));
            
            if(b!=it->first){
                
                    it--;
                
            }
            //cout << it->first <<"aa"<<it->second <<endl;
            int r = max(k - (it->second),0);
            cout << r<< endl;
        }else if(a==2){

        }
    }

}