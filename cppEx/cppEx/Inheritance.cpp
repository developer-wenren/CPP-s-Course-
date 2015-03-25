#include <iostream>
using namespace std;

class Parent{
    int i0 = 0;
public:
    int i1 = 0;
    void show1() { cout << "1" << endl; }
    void show2() {cout << "2" << endl; }
    void show3() {cout << "3" << endl; }
    void show4() {cout << "4" << endl; }
    void show5() {cout << "5" << endl; }
    void show6() {cout << "6" << endl; }
    void show7() {cout << "7" << endl; }
protected:
    int i2 = 0;
private:
    int i3 = 0;
};

class Child1 : public Parent {
public:
    void show(){
        i1 = 100;
        i2 = 100;
    }
};

class Child2 : protected Parent {
public:
    void show(){
        i1 = 100;
        i2 = 100;
    }
};

class Child3 : private Parent {
public:
    void show(){
        i1 = 100;
        i2 = 100;
    }
    void s1() {
        show1();
    }
    void s2() {
        show2();
    }
    void s3 () {
        show3();
    }
};

class Other {
private:
    Parent parent;
public:
    void s1() {
        parent.show1();
    }
    void s2() {
        parent.show2();
    }
    void s3 () {
        parent.show3();
    }
};

int main() {
    Child1 ch1;
    ch1.i1;
    ch1.show4();
    ch1.show6();
    
    Child3 ch3;
    ch3.s1();
    ch3.s2();
    ch3.s3();
    return 0;
}


