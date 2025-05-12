#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n1 ,n2;
    cin >> n1 >>n2;
    vector<int> a,b;
    for(int i =0;i<n1;i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    for(int i =0;i<n2;i++){
        int t;
        cin >> t;
        b.push_back(t);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int tar = 0; // point index in a
    int w = a[tar];
    
    for(int i = 0;i<n2;i++){
        //cout<< "every loop" << "w="<<w <<" "<<"b[i]="<< b[i]<< endl;
        if(tar==n1){
            break;
        }
        if(w==a[tar+1] && tar!=n1-1){
            tar++;
            w=a[tar];
            i--;
            continue;
        }
        if(w==b[i]){
            cout << w << " ";
            tar++;
            w = a[tar];
            continue;
        }
        if(b[i]>w){
            tar++;
            w = a[tar];
            i--;
        }
        if(tar==n1){
            break;
        }
        
        
    }
    
    

}
/*int n1,n2;
    cin >> n1 >>n2;
    set<int> x,y,result;
    for(int i = 0 ; i< n1;i++){
        int t ;
        cin >> t;
        x.insert(t);
    }
    for(int i = 0 ; i< n2;i++){
        int t ;
        cin >> t;
        y.insert(t);
    }
    set_intersection(x.begin(),x.end(),y.begin(),y.end(),inserter(result,result.begin()));
    for(auto x : result){
        cout << x <<" ";
    }*/