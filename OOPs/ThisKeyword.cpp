// This keyword is a Keyword that refers the current instance of the class
//Usages of the this keyword
//1 - it can be used to pass the current object as a parameter to another method
//2 - It can be used to refer the current class instance variable
//3 - It can be used to declear indexers

#include<iostream>
using namespace std;

class Employee {
    public:
        int id;
        float salary;
        string name;

        // Employee(int i,string n, float s){
        //     id = i;
        //     name = n;
        //     salary  = s;
        // }
        //Or we can do the same work like this 
        Employee(int j, string m , float S){
            this->id  = j;
            this->name = m;
            this->salary = S;
        }
        void display(){
            cout << id <<" " << name <<" " << salary << endl;
        }
};


int main(){
    Employee e1(201,"ram",3000.23);

    e1.display();
}