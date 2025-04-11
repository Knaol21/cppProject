#include <iostream>
 using namespace std;
 int multiply(int x, int y){
     return x*y;
 };
 double multiply(double x, int y){
     return x*y;
 };
 int multiply(int x, int y, int z){
     return x* y* z;
 }
 int main(){
     cout << multiply(7,3)<<endl;
     cout << multiply(9.4,1)<<endl;
     cout << multiply(1,2,3)<<endl;
 }
