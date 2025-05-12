#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<long long,long long> father; // father[children] = dad
    int n;
    int m;
    cin >> n >>m;
    long long f,s,s1,s2;
    for(int i =0;i<n;i++){
        cin >> f>>s;
        father[s] = f;
    }
    for(int i =0;i<m;i++){
        cin >> s1>>s2 ;
        long long g1,g2,d1,d2;
        if(father.find(s1)!=father.end()){
            d1 = father[s1];
            if(father.find(d1)!=father.end()){
                g1 = father[d1];
            }else{
                cout << "NO"<<endl;
                continue;
            }
        }else{
            cout << "NO"<<endl;
            continue;

        }
        if(father.find(s2)!=father.end()){
            d2 = father[s2];
            if(father.find(d2)!=father.end()){
                g2 = father[d2];
            }else{
                cout << "NO"<<endl;
                continue;
            }
        }else{
            cout << "NO"<<endl;
            continue;

        }
        if(g1 == g2){
            if(s1==s2){
            cout<< "NO"<<endl;
            continue;
            }
            cout<< "YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}