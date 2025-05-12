#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
 //write your code only in this function
    b-=1;
    while(a<b){
        int s1,s2;
        s1 = v[a-v.begin()];
        s2 = v[b-v.begin()];
        v[a-v.begin()] = s2;
        v[b-v.begin()] = s1;
        a+=1;
        b-=1;
    }
}
int main() {
 //read input
 int n,a,b;
//  cin >> n;
 vector<int> v ={1,2,3,4,5,6};
//  for (int i = 0;i < n;i++) {
//  int c;
//  cin >> c;
//  v.push_back(c);
//  }
 cin >> a >> b;
 //call function
 reverse(v,v.begin()+a,v.begin()+b+1);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
