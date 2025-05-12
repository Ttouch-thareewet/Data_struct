#include <iostream>
#include <vector>
using namespace std;
int relation(long long S, long long a, long long b) {
    long long max,min;
    max = std::max(a,b);
    min = std::min(a,b);
    if(min == (max-1)/S){
        return 1;
    }
    long long tmp = max;
    if(min==0){
        return 2;
    }
    while(min<tmp){ 
        tmp = (tmp-1)/S;
        if(min==tmp){
            return 2;
        }
    }
    long long d1=0,d2=0;
    while(max>0){
        max = (max-1)/S;
        d1++;
    }
    d1++;
    while(min>0){
        min = (min-1)/S;
        d2++;
    }
    d2++;
    if(d1!=d2){
        return 3;
    }else{
        return 4;
    }

}
int main() {
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n;
 long long S,a,b;
 cin >> n;
 while (n--) {
 cin >> S >> a >> b;
 cout << relation(S,a,b) << " ";
 }
 cout << endl;
}