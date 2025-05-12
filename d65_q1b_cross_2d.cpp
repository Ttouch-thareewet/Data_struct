#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m ,int r1, int r2, int c1, int c2) {
 //your code here
    int c = m[0].size();
    int r = m.size();
    vector<vector<int>> ans;
    vector<int> temp ;
    int numberc = 0;
    // cout<<"c ="<<c;
    // cout<<"r ="<<r;
    for(int i= 0;i<r;i++){
        //cout<<"i = "<<i <<endl;
        if(i>=r1 &&i<=r2){
            //cout<<"i in  if = "<<i <<endl;
            //i=r2+1;
            continue;
        }

        //cout<<"i = "<<i <<endl;
        for(int j = 0;j<c;j++){
            
            if(j>=c1&&j<=c2){
                //j=c2;
                continue;
            }
            temp.push_back(m[i][j]);
            
            if(temp.size()==c-(c2-c1+1)){
                ans.push_back(temp);
                temp.clear();
            }
        }
    }
    //cout <<"a";
    m = ans;
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 vector<vector<int>> m;
 int r,c,r1,r2,c1,c2;
 cin>> r >> c;
 cin >> r1 >> r2 >> c1 >> c2;
 m.resize(r);

 for (int i =0;i < r;i++) {
 m[i].resize(c);
 for (int j = 0;j < c;j++) {
 cin >> m[i][j];
 }
 }
 
 cross_2d(m,r1,r2,c1,c2);
 for (int i =0;i < m.size();i++) {
 for (int j = 0;j < m[i].size();j++) {
 cout << m[i][j] << " ";
 }
 cout << "\n";
 }
 return 0;
}