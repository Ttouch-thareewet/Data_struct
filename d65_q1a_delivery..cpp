#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> p;
    queue<int> q1,q2;
    vector<int> sum;

    int s=0;
    for(int i=0;i<m;i++){
        int t;
        cin >> t;
        
        p.push_back(t);
    }
    for(int i=0;i<n;i++){
        int key;
        cin >> key;
        if(key==1){
            int app,price;
            cin >>app>>price;
            if(app==1){
                q1.push(price);
            }else if(app==2){
                q2.push(price);
            }
            

        }else if(key ==2){
            if(q1.empty()&&!q2.empty()){//q1ว่าง q2มีตัว
                s+=q2.front();
                sum.push_back(s);
                q2.pop();
            }else if(!q1.empty()&&q2.empty()){
                s+=q1.front();
                sum.push_back(s);
                q1.pop();
            }else{
                if(q1.front()<=q2.front()){
                    s+=q1.front();
                    sum.push_back(s);
                    q1.pop();
                }else{
                    s+=q2.front();
                    sum.push_back(s);
                    q2.pop();
                }
            }
        }
    }
    for(int i=0;i<p.size();i++){
        auto lower = lower_bound(sum.begin(),sum.end(),p[i]);
        if(lower == sum.end()){
            cout <<"-1 ";
        }else{
            cout << lower - sum.begin()+1 <<" ";
        }
    }
}