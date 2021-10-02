#include<iostream>
using namespace std;

//     class ->    Class is group of similar objects.It can have fields, methods, constructors etc.
//     objects ->   Objects means that have state and behavior. Here state means data and behavior means
//                  functionality.It is created at runtime hence it is called the rumtime entity.

// Here  is an example of the class and objects;

class Student {
    public:
        int id;
        string name;
};


int main(){
        Student s1;
        s1.id = 201 ;
        s1.name = "Class And Objects ";
        cout << s1.id << "\n" << s1.name << "\n";
        return 0;
}