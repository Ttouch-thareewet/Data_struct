#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int j =0;j<a;j++){
        int n,k;
        bool check = true;
        cin >> n>>k;
        vector<int> v;
        for(int i =0;i<n;i++ ){
            int t;
            cin >> t;
            v.push_back(t);
        }
        
        for(int i=0;i<n;i++){ // i =parent
            int count=1; 
            while(true){
                if(count>k){
                 break;
                 }    
                if((i*k)+count>=n){
                    break;
                }
                if(v[i]<=v[(i*k)+count]){
                    //cout << i << 'a';
                    cout << "false" << endl;
                    check = false;
                    break;
                }
                count++;
            }
            if(!check){
                break;
            }
            if((i*k)+1>=n){
                break;
            }
            
        }
        if(check){
            cout << "true" << endl;
        }
        
    }
}