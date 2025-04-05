#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence;
    cout << "Enter a sentence (no spaces): ";
    cin >> sentence; // Using >> as per early topic coverage
    sentence += "!";
    cout << "Modified sentence: " << sentence << std::endl;
    
  return 0;
}
