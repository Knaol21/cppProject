#include <iostream>

int main(){
    int a = 5, b = 3;
    int sum = a + b;           // Arithmetic operation
    a += 2;                    // Compound assignment (a = a + 2)
    
    // Ternary operator: if (a > b) then max = a, else max = b
    int max = (a > b) ? a : b;   
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "New value of a: " << a << std::endl;
    std::cout << "Maximum of a and b: " << max << std::endl;
    return 0;
}
