#include <iostream>
#include <vector>
using namespace std;
int main(){
    int mFront,mSize,mCap,last,correction,n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> mFront >> mSize>>mCap>>last>>correction;
    if(correction==0){
        if(mSize==mCap){
            if(last==mFront){
                cout << "OK";
            }else{
                cout <<"WRONG";
            }
        }else{
            if(last == (mFront+mSize)%mCap){
                cout << "OK";
            }else{
                cout <<"WRONG";
            }
        }
    }else{
        if(correction==1){
            if(last == (mFront+mSize)%mCap){
                cout << "OK";
            }else{
                mFront = (last+mCap-mSize)%mCap;
                cout <<"WRONG "+mFront;
            }
        }else if(correction==2){
            if(last == (mFront+mSize)%mCap){
                cout << "OK";
            }else{
                mSize = (last+mCap-mFront)%mCap;
                cout <<"WRONG "+mFront;
            }
        }else if(correction==3){
            if(mFront==last){
                if(mCap==mSize){
                    cout << "OK";
                }else{
                    mCap = mSize;
                    cout <<"WRONG "<<mCap; 
                }

            }else{

            }
        }else if(correction==4){
            if(last == (mFront+mSize)%mCap){
                cout << "OK";
            }else{
                last = (mFront+mSize)%mCap;
                cout <<"WRONG "+last;
            }
        }
    }
    }
    
}