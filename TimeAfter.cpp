#include <iostream>
#include <string>
using namespace std;
int main (){
    string s1 ;
    int plus,h,m;
    string sh,sm;
    cin >> sh >> sm;
    cin >> plus;
    h = stoi(sh);
    m = stoi(sm);
    int total = h*60 + m + plus;
    int oh,om;
    oh = total /60;
    if(oh>23){
        oh = oh-24;
    }
    if(oh<10){
        cout << "0" <<oh<<" ";
    }else{
        cout <<oh<<" ";
    }

    om = total%60;
    if(om<10){
        cout <<"0"<<om;
    }else{
        cout <<om;
    }
    
}