#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    map<string,int> s;
    vector<string> s2;
    int n;
    string t;
    cin >> n;
    for(int i = 0 ;i<n;i++){
        cin >> t;
        if(s[t]==0){
            s[t]=1;
            s2.push_back(t);
        }else{
            s[t]++;
        }
    }
    sort(s2.begin(),s2.end());

    for(int i = 0;i< s2.size();i++){
        if(s[s2[i]]>1)
        cout << s2[i] <<" "<<s[s2[i]]<<endl ;
    }

}