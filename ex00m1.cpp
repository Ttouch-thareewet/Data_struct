#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> time(n);
    
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        time[i] = t;
    }
    int count = 0;
    
    int i=0;
    while(true){
        for(int j =0;j<n;j++){
            if(time[j]==0){
                for(int k=0;k<m-count;k++){
                    cout <<i<<endl;
                }
                return 0;
            }
            if(i%time[j]==0){
                cout <<i<<endl;
                count++;
            }
            if(count>=m){
                return 0;
            }
        }
        i++;
    }
}