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
public:
    string name;
    Date *birth;
public:
    Employee(string name) : name(name) {
        cout << "Employee()" << endl;
        birth = new Date(100, 20, 30);
    }
    Employee(const Employee &em) {
        cout << "Employee(Employee &em)" << endl;
        this->name = em.name;
        //浅拷贝
//        this->birth = em.birth;
        this->birth = new Date(em.birth->year, em.birth->month, em.birth->day);
        
    }
    //如果一个类中有一个变量是 别的类型的指针时，析构方法就必须要我们自己写了
    ~Employee(){
        delete birth;
        cout << "~Employee()" << endl;
    }
    
    //const 的成员函数 中 不能修改成员变量
    void show() const{

    }
    void show(){
        
    }
};


int main() {
    
//    Date *d = new Date(10, 30, 40);
//    d->year = 100;
//    d->set(100, 200, 400);
    
    Employee em("张三");
    em.show();

    
    //const 修饰的对象 不能更改其成员变量
    const Employee em2("张三");
    em2.show();
    
    //通过同类型对象 创建新的对象时 会掉用拷贝构造
    Employee em3 = em2;
    
    
    
    return 0;
}



