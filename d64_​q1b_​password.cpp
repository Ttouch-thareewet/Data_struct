#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,l;
    cin >> n>>m >>l;
    vector<int> k(l);
    for(int i=0;i<l;i++){
        int t;
        cin>>t;
        k[i]=t;
    }
    map<char,int> stoi;
    map<int,char> itos;
    for(int i=0;i<26;i++){ //[0] =a
        char t = 'a'+i;
        stoi[t] = i;
        itos[i] = t;
    }
    
    set<string> s;
    vector<string> ans;
    for(int i=0;i<n;i++){
        string t;
        cin >> t;
        s.insert(t);
    }
    for(int i=0;i<m;i++){
        string f="";
        string t;
        cin>>t;
        for(int j = 0;j<l;j++){
            f+= itos[(stoi[t[j]]+k[j])%26];
        }
        if(s.find(f)==s.end()){
            cout<<"Unknown\n";
            
        }else{
            cout<<"Match\n";
        }
    }
}