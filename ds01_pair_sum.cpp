#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    int k =0;
    cin >> n>>m;
    vector<int> v;
    for(int i = 0; i<n;i++){
        int t ;
        cin >>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<m;i++){
        k=0;
        int sum;
        cin >> sum;
        for(int j=0;j<v.size();j++){
            int tar = sum - v[j];
            // cout<<"tar="<<tar<<endl;
            // cout <<"v[j]="<<v[j]<<endl;
            for(int e = 0;e<v.size();e++){
                if(tar ==v[e]&&e!=j){
                    // cout<<"found"<<endl;
                    k=1;
                    break;
                }
                if(tar<v[e]){
                    break;
                }
            }
            if(k==1){
                break;
            }
        }
        if(k==1){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
        
    }
}