#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>


template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> res;
    std::map<T,int> m;
    for(int i =0;i< mSize;i++){
        m[mData[i]]+=1;
    }
    for(auto a:k){
        res.push_back({a,m[a]});
    }
    return res;
}

#endif
