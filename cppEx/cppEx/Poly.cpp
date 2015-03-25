#include <iostream>
using namespace std;

class Animal{
public:
    //子类只能重写父类的 虚函数
    virtual void eat() {
        cout << "动物吃" << endl;
    }
    void sleep() {
        cout << "动物睡" << endl;
    }
};
class Dog : public Animal{
public:
    void eat() {
        cout << "狗吃" << endl;
    }
    void sleep() {
        cout << "狗睡" << endl;
    }
    void show() {
        
    }
};

class Cat : public Animal{
public:
    void eat() {
        cout << "猫吃" << endl;
    }
    void sleep() {
        cout << "猫睡" << endl;
    }

};
int main() {
    
    Animal *animal = new Dog;
    //调用的不是虚函数 那么就是静态绑定，看指针的类型是什么哪个类的，就去哪个类中找
    animal->sleep();
    //调用的是虚函数 那么就是动态绑定，看指针指向的对象类型是什么哪个类的，就去哪个类中
    animal->eat();
    delete animal;
    
    animal = new Cat;
    animal->eat();
    
    return 0;
}




