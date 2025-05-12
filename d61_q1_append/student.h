#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        int n1 = mSize;
        int n2 = s.size();
        ensureCapacity(n1+n2);
        for(int i=n1-1;i>=0;i--){
            mData[i+n2]= mData[i];
        } 
        for(int i=0;i<n2;i++){
            mData[i] = s.mData[i];
        }
        mSize = n1+n2;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        int n1 = mSize;
        int n2 = q.size();
        ensureCapacity(n1+n2);
        for(int i=n1-1;i>=0;i--){
            mData[i+n2] = mData[i];
        }
        for(int i=0;i<n2;i++){
            mData[n2-1-i] = q.mData[i];
        }
        mSize = n1+n2;
        
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        int n1 = mSize;
        int n2 = s.size();
        ensureCapacity(n1+n2);
        int count =n2-1;
        for(int i=n1;i<n1+n2;i++){
            mData[i] = s.mData[count--];
        }
        mSize = n1+n2;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        int n1 = mSize;
        int n2 = q.size();
        ensureCapacity(n1+n2);
        for(int i=n1;i<n1+n2;i++){
            mData[i] = q.mData[i-n1];
        }
        mSize = n2+n1;

    }
}
