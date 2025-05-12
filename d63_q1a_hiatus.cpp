#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,M,y,m;
    vector<pair<int,int>> v ;
    cin >> n >> M;
    for(int i =0;i<n;i++){
        cin >> y >> m;
        v.push_back(make_pair(y,m));
    }
    sort(v.begin(),v.end());
    for(int i =0;i<M;i++){
        cin >> y >> m;
        pair<int,int> a = make_pair(y,m);
        auto lower = lower_bound(v.begin(),v.end(),a);
        int index = lower - v.begin();
        if(index == 0){
            if(v[0].first == y && v[0].second==m){
                cout << "0 0 ";
                continue;
            }else{
                cout << "-1 -1 ";
            }
        }else if(lower == v.end()){
                cout<< v[index-1].first <<" "<< v[index-1].second <<" ";
        }else{
            if(v[index].first == y && v[index].second==m){
                cout << "0 0 ";
                continue;
            }else{
                cout<< v[index-1].first <<" "<< v[index-1].second <<" ";
            }
        }
    }
}
