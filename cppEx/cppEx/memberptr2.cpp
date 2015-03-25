#include <iostream>
using namespace std;

class Date{
public:
    Date (int y, int m, int d) : year(y), month(m), day(d){
    }
    int year;
    int month;
    int day;
    void show() {
        cout << year << '-' << month << '-' << day << endl;
    }
};

class CCObject{};

class Hero : public CCObject{
    const char* name;
public:
    Hero(const char *name) : name(name) {}
    void move(){
        //执行事件
        cout << name << "英雄移动" << endl;
    }
};

class Enemy : public CCObject{
    const char* name;
public:
    Enemy(const char *name) : name(name) {}
    void attack(){
        //执行事件
        cout << name << "攻击" << endl;
    }
};

typedef int T;
typedef void (CCObject::*FUNCTION)();

class Button {
    CCObject *target;
    FUNCTION function;
public:
    Button(CCObject *target, FUNCTION function) : target(target), function(function) {}
    void touch() {
        (target->*function)();
    }
};


int main() {
    void (Date::*f)();
    f = &Date::show;
    
    Date d(100, 10, 23);
    (d.*f)();
    
    Date *pd = new Date(200, 30, 10);
    (pd->*f)();
    
    Hero *hero = new Hero("压力山大");
    Enemy *enemy = new Enemy("恶魔猎手");
    
    
 #define function_selector(SET) (FUNCTION)(&SET)
    Button *button = new Button(enemy, (FUNCTION)(&Enemy::attack));
    button->touch();
    Button *button2 = new Button(hero, function_selector(Hero::move));
    button2->touch();
    


    return 0;
}



