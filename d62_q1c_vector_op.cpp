#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    int n= 0;
    cin >> n;
    vector<int> v ;
    for(int i =0 ;i<n;i++){
        string s;
        cin >>s;
        if(s=="pb"){
            int x ;
            cin >> x;
            v.push_back(x);

        }else if(s=="d"){
            int x ;
            cin >> x;
            v.erase(v.begin()+x);
        }else if(s=="sa"){
            sort(v.begin(),v.end());
        }else if(s=="sd"){
            sort(v.begin(),v.end());
            int size = v.size();
            for(int j = 0;j<size/2;j++){
                int a = v[j];
                int b = v[size-1-j];
                v[size-1-j] = a;
                v[j] = b;
            }
        }else if(s=="r"){
            int size = v.size();
            for(int j = 0;j<size/2;j++){
                int a = v[j];
                int b = v[size-1-j];
                v[size-1-j] = a;
                v[j] = b;
            }
        }
    }
    for(int i : v){
        cout << i<<" ";
    }
}