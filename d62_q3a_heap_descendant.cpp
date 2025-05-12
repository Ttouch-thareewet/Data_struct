#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,p;
    cin >> n >> p ;
    vector<int> r;
    int p1,p2;
    int count=1;
    r.push_back(p);
    while(true){
        int c1,c2;
        c1 = (2*p)+1;
        if(c1>=n){
            break;
        }else{
            r.push_back(c1);
        }

        c2 = (2*p)+2;
        if(c2>=n){
            break;
        }else{
            r.push_back(c2);
        }
        p = r[count++];

    }
    cout << r.size()<<endl;
    for(auto s : r){
        cout << s <<" ";
    }
}