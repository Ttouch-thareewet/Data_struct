#include <iostream>
#include <vector>
using namespace std;
int max(int a,int b){
    if(a>=b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if(a<=b){
        return a;
    }
    return b;
}

vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
 //write some code here
 int indexupper = min(it-v.begin()+k,v.size()-1);
 int indexlower = max(0,(it-v.begin()-k));
//  cout << indexlower<<endl;
//  cout << indexupper<<endl;
 for(int i= 0;i<=indexupper-indexlower;i++){
    // cout << i <<endl;
    v.erase(v.begin()+indexlower);
 }
 return v;
}

int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}