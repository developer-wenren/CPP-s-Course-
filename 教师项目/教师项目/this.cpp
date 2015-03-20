#include <iostream>
using namespace std;
class Date{
public:
    Date (int y, int m, int d) : year(y), month(m), day(d){
        cout << "Date()" << endl;
    }
    int year;
    int month;
    int day;
    void show() {
        cout << year << '-' << month << '-' << day << endl;
    }
    void set(int year, int month, int day) {
        //局部变量优先原则
        this->year = year;
        this->month = month;
        this->day = day;
    }
    ~Date() {
        cout << "~Date()" << endl;
    }
};

class Employee {
    string name;
    Date *birth;
public:
    Employee(string name) : name(name) {
        cout << "Employee()" << endl;
        birth = new Date(100, 20, 30);
    }
    //如果一个类中有一个变量是 别的类型的指针时，析构方法就必须要我们自己写了
    ~Employee(){
        delete birth;
        cout << "~Employee()" << endl;
    }
};


int main() {
    
//    Date *d = new Date(10, 30, 40);
//    d->year = 100;
//    d->set(100, 200, 400);
    
    Employee em("张三");
    
    return 0;
}



