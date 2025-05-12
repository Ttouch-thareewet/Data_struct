#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    vector<int> power;
    set<pair<int,int>> max;// power,team for sorting
    map<int,int> maxmap;//for easily searching
    cin >> n>>m;
    for(int i=0;i<m;i++){
        max.insert({1,i});
        maxmap[i]=1;
    }
    for(int i = 0;i<n;i++){
        int t;
        cin >> t;
        power.push_back(t);
    }
    for(int i = 0;i<n;i++){
        int t;
        cin >> t;
        if(power[i]>maxmap[t]){
            auto it = max.find({maxmap[t],t});
            maxmap[t]=power[i];
            max.erase(it);
            max.insert({power[i],t});
        }
        cout << (*(max.begin())).first<<" ";
        
    }

    
    
}