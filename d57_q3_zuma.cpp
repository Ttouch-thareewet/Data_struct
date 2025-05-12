#include <iostream>
using namespace std;
template <typename T>
class node{
    public :
    T color;
    node * next;
    node * prev;
    node(T c) {
        color = c;
        next = NULL;
        prev = NULL;
    }
};
int main(){
    int mSize;
    node<int> * mFirst;
    int n,k,v,tmp;
    cin >> n >> k >> v;
    cin >>tmp;
    mFirst = new node<int>(tmp);
    mSize = n;
    node<int> * swing = mFirst;
    for(int i=1;i<n;i++){
        cin >> tmp;
        node<int> * t = new node<int>(tmp);
        swing->next = t;
        t->prev = swing;
        swing = swing->prev;
    }
    mFirst->prev = NULL;

    swing = mFirst;
    if(k==n){// bottom

    }else{
        for(int i=0;i<k;i++){

        }
    }
    
    
}