void shift(int k) {
	// TODO: Add your code here
	if(k<0){
		k += size() * (k/size()+1);
		k = k% size();
	}else{
		k = k% size();
	}
	auto it = mHeader->next;
	for(int i=0;i<k;i++){
		it = it->next;
	}// it is now new first 
	mHeader->next->prev = mHeader->prev;//แก้ตัวเก่าให้จิ้มกันและกัน
	mHeader->prev->next = mHeader->next;//แก้ตัวเก่าให้จิ้มกันและกัน
	mHeader->next = it;
	mHeader->prev =it->prev;
	it->prev = mHeader;// prev of new front to mHeader
	mHeader->prev->next = mHeader; // next of new back to mHeader

}
