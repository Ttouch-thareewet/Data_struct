#include <iostream>
#include <set>
#include <algorithm>
//#include <pair>
using namespace std;
int main(){
    int n,start,end;
    pair<int,int> t;
    set<pair<int,int>> s;
    cin >>n;
    for(int i=0;i<n;i++){ 
        cin >> start >>end;
        if(i==0){
            s.insert(make_pair(start,end));
            cout <<i+1<<" ";
            continue;
        }
        t = make_pair(start,0);
        auto it = lower_bound(s.begin(),s.end(),t);
        if(it == s.end()){
            pair<int,int> p = *(prev(s.end()));
            if(start>p.second){
                s.insert(make_pair(start,end));
            cout << i+1 <<" ";
            }
           
        }else if(it ==s.begin()){ // 5 10 15 20   13 14
            if(end<it->first){
                    s.insert(make_pair(start,end));
            cout << i+1 <<" ";
            }
            
        }else{
            pair<int,int> p = *(prev(it));
            if(start>p.second && end <it->first){
                s.insert(make_pair(start,end));
            cout << i+1 <<" ";
            }
        }
    }
}

 

    
