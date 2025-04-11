#include <iostream>
 using namespace std;
 template <typename myCustomType, typename anotherType>
 myCustomType divide(myCustomType a, anotherType b){
     return  a + b;
 }
 int main(){
     cout<<divide(23.50,41)<<endl;
 }
