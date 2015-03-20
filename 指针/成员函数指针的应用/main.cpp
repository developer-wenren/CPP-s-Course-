//
//  main.cpp
//  成员函数指针的应用
//
//  Created by zjsruxxxy3 on 15/3/20.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

class Person{
    
};

class Hero:public Person  // 1.为何要public 继承 ？
{
    
public:
    void move()
    {
        std::cout<<"英雄移动"<<std::endl;
        
    }
    
};

class Enemy: public Person
{
public:
    void move()
    {
        std::cout<<"敌人移动"<<std::endl;
        
    }
};

typedef void (Person::*SELT)();

#define function_seletcor(SEL)  SELT(&SEL)

class Button
{
    Person *target;
    
    SELT sel;
    
public:
    Button(Person *target,SELT sel):target(target),sel(sel)
    {
        
    }
    
    void touch()
    {
        (target->*sel)(); // 对象指针变量使用成员函数指针调用函数的方式，以免为* + sel()
        
    }
};


int main(int argc, const char * argv[])
{

    // insert code here...
    
    std::cout << "Hello, Worldddd!\n";
    
    Hero *hero = new Hero;
    
    Enemy *enemy = new Enemy;

    Button *button = new Button(enemy,(SELT)&Enemy::move); // 2.为何要强转？
    
    Button *button2 = new Button(hero,function_seletcor(Hero::move));

    button->touch();
    
    button2->touch();
    
    return 0;
}

