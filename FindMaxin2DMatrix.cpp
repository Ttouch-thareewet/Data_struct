#include <iostream>
using namespace std;
int main(){
    int n,m,r;
    cin >>n>>m;
    cin >>r;
    int a[n][m];
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >>a[i][j];
        }
    }
    int b[r][4];//problem
    for(int i = 0 ;i<r;i++){
        for(int j = 0;j<4;j++){
            cin >>b[i][j];
        }
    }
    for(int k =0;k<r;k++){
        int r1 = b[k][0];
        int r2 = b[k][2];
        int c1 = b[k][1];
        int c2 = b[k][3];
        int max=-20000000;
        bool hasmax = false;
        if(r1>r2 || c1>c2){
            cout << "INVALID" <<endl;
            continue;
        }
        if((r1>n||c1>m)&&(r2>n||c2>m)){
            cout << "OUTSIDE" <<endl;
            continue;
        }
        for(int i =r1-1;i<r2 ;i++){
            if(i>n-1){
                break;
            }
            for(int j =c1-1;j<c2;j++){
                if(j>m-1){
                    break;
                }
                if(max<a[i][j]){
                    max = a[i][j];
                }
            }
            
        }
        cout << max<<endl;
    }
}