#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>

//you can include any other file here
//you are allow to use any data structure

using namespace std;
template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
   std::set<T> s;
   T * v= new T[mSize];
   int count=0;
   for(int i = 0;i<mSize;i++){
        if(s.find(mData[i])==s.end()){
            v[count] = mData[i];
            s.insert(mData[i]);
            count++;
        }
   }
   delete [] mData;
   mData = &(v[0]);
   mSize = count;
}

#endif
