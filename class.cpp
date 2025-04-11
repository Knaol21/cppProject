#include <iostream>
using namespace std;

class Student {
private:
    int age;

protected:
    double gpa;
    bool isMarried;

public:
    string name, location;

    string getLocation() {
        return name + " Lives at " + location;
    }

    double getGpa() {
        return gpa;
    }

    void setGpa(double g) {
        gpa = g;
    }
};

class Teacher : public Student {
public:
    int id;
};

int main() {
    Student Naol, Dan;
    Naol.name = "Naol";
    Naol.location = "Addis Ababa";
    Dan.name = "Dan";
    Dan.location = "B127";
    cout << Dan.getLocation() << endl;

    Teacher seyfu;
    seyfu.name = "Seyfu";
    seyfu.location = "School";
    seyfu.setGpa(4.00);

    return 0;
}
