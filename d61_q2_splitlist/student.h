void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(mSize==0){
        return ;
    }
    int n = size();
    int n1=n/2,n2=n/2;
    if(n%2==1){
        n1+=1;
    }
    //ตัวแรก
    iterator it = begin();
    it.ptr->prev = list1.end().ptr->prev;
    list1.end().ptr->prev->next = it.ptr;
    //
    for(int i=0;i<n1-1;i++){
        it++;
    }
    auto tmp = it.ptr->next;
    it.ptr->next = list1.end().ptr;
    list1.end().ptr->prev = it.ptr;
    it = tmp;
    //l2ตัวแรก
    it.ptr->prev = list2.end().ptr->prev;
    list2.end().ptr->prev->next = it.ptr;
    //l2ตัวสุดท้าย
    it = end().ptr->prev;
    it.ptr->next = list2.end().ptr;
    list2.end().ptr->prev = it.ptr;
    list1.mSize+=n1;
    list2.mSize+=n2;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize=0;
}
