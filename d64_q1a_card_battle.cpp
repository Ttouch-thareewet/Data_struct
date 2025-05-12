#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m,t;
    cin >> n >>m;
    map<int,int> card;
    for(int i= 0;i<n;i++){
        cin >> t;
        if(card[t]==0){
            card[t] = 1;
        }else{
            card[t]++;
        }
    }
    for(int i = 1;i<=m;i++){
        int r;
        cin >> r;
        for(int j = 0;j<r;j++){
            cin >> t;
            auto upper = card.upper_bound(t);
            if( upper == card.end()){
                
                cout << i;
                return 0;
            }else{
                upper->second--;   
                if(upper->second==0){
                    card.erase(upper);
                }

            }
              
            // if(card.empty()){
            //     cout << i;
            //     return 0;
            // }
        }
      
    }
   
    cout<< m+1;
    
}