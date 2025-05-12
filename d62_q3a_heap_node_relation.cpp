#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b,n,m;
    cin >> n >> m;
    
    for(int i=0;i<m;i++){
        bool check = false;
        cin >> a >>b;
    if(a==b){
        cout << "a and b are the same node"<<endl;
        check = true;
        continue;
    }else if(a<b){
        while(a<=b){
            if(a==b){
                cout <<"a is an ancestor of b"<<endl;
                check = true;
                break;
            }
            b = (b-1)/2;
        }
        
        
    }else{
        while(b<=a){
            if(a==b){
                cout <<"b is an ancestor of a"<<endl;
                check = true;
                break;
            }
            a = (a-1)/2;
        }
        
    }
    if(!check)  cout << "a and b are not related"<<endl;
    
    }
    
    
}