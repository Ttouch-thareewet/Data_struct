#include <iostream>
#include <vector>
#include "list.h"
#include "student.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  cin >> n;
  CP::list<int> l;
  for (int i = 0;i < n;i++) l.push_back((i+1)*10);
  l.print();
  l.messup();
  l.print();

  if(l.check()){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
  
}
