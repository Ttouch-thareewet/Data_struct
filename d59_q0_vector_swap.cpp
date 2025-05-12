// #include <iostream>
// #include <vector>
// using namespace std;
// void vector_swap(vector<int> &v1,vector<int> &v2,
//  int start1, int end1,
//  int start2, int end2) {
//     vector<int> v3,v4;
//     for(int i = 0;i<v1.size();i++){
//         if(start1==end1 && i==start1){
//             for(int j = start2;j<end2;j++){
//                 v3.push_back(v2[j]);
//             }
            
//         }
//         if(i<start1 || i>end1-1){
//             v3.push_back(v1[i]);
//         }else{
//             for(int j = start2;j<end2;j++){
//                 v3.push_back(v2[j]);
//             }
//             i = end1 - 1;
//         }
//     }
//     for(int i = 0;i<v2.size();i++){
//         if(start2==end2 && i==start2){
//             for(int j = start1;j<end1;j++){
//                 v4.push_back(v1[j]);
//             }
            
//         }
//         if(i<start2 || i>end2-1){
//             v4.push_back(v2[i]);
//         }else{
//             for(int j = start1;j<end1;j++){
//                 v4.push_back(v1[j]);
//             }
//             i = end2 - 1;
//         }
//     }
    
//     v1 = v3;
//     v2 = v4;

// }
// int main() {
//  //read input
//  int n,c;
//  vector<int>v1,v2;
//  cin >> n; //number of v1
//  for (int i = 0;i < n;i++) {
//  cin >> c;
//  v1.push_back(c);
//  }
//  cin >> n; //number of v2
//  for (int i = 0;i < n;i++) {
//  cin >> c;
//  v2.push_back(c);
//  }
//  int s1,e1,s2,e2;
//  cin >> s1 >> e1 >> s2 >> e2;
 
// // v1 = {0, 1, 2, 3, 4};
// // v2 = {50, 51, 52, 53, 54};
// //  int s1=1,e1=1,s2=3,e2=5; //position


//  //call the function
//  vector_swap(v1,v2,s1,e1,s2,e2);
//  //display content of the stack
//  cout << "v1 has " << v1.size() << endl;
//  for (auto &x : v1) { cout << x << " "; }
//  cout << endl;
//  //display content of the stack
//  cout << "v2 has " << v2.size() << endl;
//  for (auto &x : v2) { cout << x << " "; }
//  cout << endl;
// }
#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
 int start1, int end1,
 int start2, int end2) {
     vector<int> v3;
     vector<int> v4;
     for(int i=0; i<start1 ; i++) {
        v3.push_back(v1[i]);
     }
     for(int i=start2 ; i<end2 ; i++) {
        v3.push_back(v2[i]);
     }
     for(int i=end1 ; i< v1.size() ; i++) {
        v3.push_back(v1[i]);
     }
     for(int i=0; i<start2 ; i++) {
        v4.push_back(v2[i]);
     }
     for(int i=start1 ; i<end1 ; i++) {
        
        v4.push_back(v1[i]);
     }
     for(int i=end2 ; i< v2.size(); i++) {
        v4.push_back(v2[i]);
     }
     v1 = v3;
     v2 = v4;
}
int main() {
 //read input
 int n,c;
 vector<int>v1,v2;
//  cin >> n; //number of v1
//  for (int i = 0;i < n;i++) {
//  cin >> c;
//  v1.push_back(c);
//  }
//  cin >> n; //number of v2
//  for (int i = 0;i < n;i++) {
//  cin >> c;
//  v2.push_back(c);
//  }
//  int s1,e1,s2,e2; //position
//  cin >> s1 >> e1 >> s2 >> e2;
v1 = {0, 1, 2, 3, 4};
 v2 = {50, 51, 52, 53, 54};
  int s1=1,e1=1,s2=3,e2=5; //position
 //call the function
 vector_swap(v1,v2,s1,e1,s2,e2);
 //display content of the stack
 cout << "v1 has " << v1.size() << endl;
 for (auto &x : v1) { cout << x << " "; }
 cout << endl;
 //display content of the stack
 cout << "v2 has " << v2.size() << endl;
 for (auto &x : v2) { cout << x << " "; }
 cout << endl;
}
