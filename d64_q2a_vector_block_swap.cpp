#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
    if(m==0){
        return false;
    }
    int s1 = a - this.begin();
    int s2 = b - this.begin();
    int e1 = a+m-1 - this.begin();
    int e2 = b+m-1 - this.begin();
    if(0<=s1<=mSize-1 && 0<=s2<=mSize-1 &&0<=e1<=mSize-1 &&0<=e2<=mSize-1 ){
        if(e2<s1 ||e1<s2){
            for(int i=0;i<m;i++){
                int swap = mData[s1+i];
                mData[s1+i] = mData[s2+i];
                mData[s2+i] = swap;
            }
            return true;
        }
    }
        return false;
    
    

}

#endif
