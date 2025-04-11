#include <iostream>
using namespace std;

struct Animal {
    int age;
    string name, sound;
} cat;

struct Dog {
    Animal dog;
    int maxSpeed;
} jack;

struct Cat {
    Animal cat;
    int max_meows;
};

int main() {
    cat.age = 13;
    jack.maxSpeed = 69;
    jack.dog.sound = "woof";

    Cat jerry;
    jerry.max_meows = 44;

    Cat* ptr_jerry = &jerry;

    cout << ptr_jerry << endl;
    cout << ptr_jerry->max_meows << endl;
    cout << jack.maxSpeed << endl;
    cout << jack.dog.sound << endl;

    return 0;
}
