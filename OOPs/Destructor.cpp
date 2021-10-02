//Destructor is opposite of the constructor 
// it can only created once in a class 
// It invokes when the objects of the class is deleted 

#include<iostream>
using namespace std;

class Employe{
    public:
        int id;
        string name;

        Employe(int i , string s){
            id = i; 
            name = s;

        }
        void display(){
            cout << id <<" " << name << endl;
        }
        ~Employe(){
            cout << "Object has been deleted " << endl;
        }
};

int main(){
    Employe s(201 ,"Sonoo");
    s.display();
    //Here automatically comes out the Object has been deleted massege;
}