//
//  main.cpp
//  成员函数指针的应用
//
//  Created by zjsruxxxy3 on 15/3/20.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

class Person
{
    
};


class Button;

#define function_seletcor(sel)  (SEL)(&sel)

typedef void (Person::*SEL)(Button *);

class Button
{
    Person *target;
    
    SEL sel;
    
public:
    int tag;
    Button(Person *target,SEL sel):target(target),sel(sel)
    {
        
    }
    
    void touch()
    {
        (target->*sel)(this); // 对象指针变量使用成员函数指针调用函数的方式，以免为* + sel()    // 传对象自己

    }
};

class Hero:public Person  // 1.为何要public 继承 ？
{
    
public:
    void move(Button *button)
    {
        std::cout<<"英雄移动"<< button->tag << std::endl;
        
    }
    
};

class Enemy: public Person
{
public:
    void move(Person *sender)
    {
        std::cout<<"敌人移动"<<std::endl;
        
    }
};


int main(int argc, const char * argv[])
{
    // insert code here...
    
    std::cout << "Hello, Worldddd!\n";
    
    Hero *hero = new Hero;
    
    std::cout<<hero<<std::endl;

    Enemy *enemy = new Enemy;

    Button *button = new Button(hero,(SEL)&Hero::move); // 2.为何要强转？
    
    Button *button2 = new Button(hero,function_seletcor(Hero::move));
    
    button->tag = 101;
    button2->tag = 120;
    
    button->touch();
    
    button2->touch();
    
    return 0;
}

