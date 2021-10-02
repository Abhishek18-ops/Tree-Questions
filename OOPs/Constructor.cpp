#include<iostream>

using namespace std;

class Student{
    public:
    int id; 
    double salary;
    string name;
    //Default constructor 
        Student(){
            cout << " This is default constructor " << endl;

        }
    //Parameterised constructor 
        Student(int i,double salarye , string namee ){
            id = i; 
            salary = salarye ;
            name = namee;
        }

        void display(){
            cout << id <<" " << salary << " " << name << endl; 
        }

};

int main(){
    Student s(201,50000.234,"Ram");
    s.display();

}