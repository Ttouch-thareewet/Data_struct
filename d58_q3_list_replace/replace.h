void replace(const T& x, list<T>& y) {
  //write your code here
  auto it = begin();
  
  while(it!=end()){
    
    if(x==*it){
      
        auto it2 = erase(it);
        for(auto i = y.begin();i!=y.end();i++){
          it = insert(it2,*i);
        }
        //it++;
        
    }else{
      it++;
    }

  }


}
