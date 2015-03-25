#include <iostream>
using namespace std;

class Enemy {
public:
    void attack() {
        cout << "敌人攻击" << endl;
    }
    void idle() {
        cout << "敌人待机" << endl;
    }
};

class DemonArrow : public Enemy {
public:
    //不是重写  叫名字隐藏 只要子类的方法名与父类的方法(非虚函数)名相同就会触发名字隐藏
    void attack() {
        cout << "恶魔弓箭手攻击" << endl;
    }
    void idle(int a) {
        cout << "恶魔弓箭手待机" << endl;
    }
};
int main() {
    
    DemonArrow da;
    da.attack();
    da.Enemy::attack();

    
    da.Enemy::idle();
    
    return 0;
}




