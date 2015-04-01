//
//  main.cpp
//  UIButton的模拟
//
//  Created by zjsruxxxy3 on 15/4/1.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;



class Button;
class NSObject;

typedef void (NSObject::*Func)(Button*);

#define seletcor_func(SET)  (Func)(&SET)        // 宏切忌有冒号":"

class NSObject
{
public:
   
    bool init()
    {
        
        return true;
    }
    
};



class Button
{
    int _tag;
    
    Func f;

    NSObject *target;
    

public:
    int getTag()
    {
        return _tag;
        
    }
    
    Button(int _tag,Func f,NSObject *target):_tag(_tag),f(f),target(target)
    {
        
    }
    
    void touch()
    {
        (target->*f)(this);
    }
    
};


class Hero: public NSObject
{
public:
    
    static Hero* creat()
    {
        Hero *hero = new Hero;
        
        if (hero && hero->init())
        {
            
//            hero autorelease
            cout<<"英雄初始化"<<endl;
            
            return hero;
            
        }
        
        delete hero;
        
        return nullptr;

    }
    
    bool init()
    {
        bool isDone = NSObject::init()? true:false;
        
        
        return isDone;
    }
    
    void move(Button *button)
    {
        cout<<"英雄移动"<<endl;
        
        cout<<"按钮的tag是"<<(button->getTag())<<endl;
        
    }

};

class Enemy:public NSObject
{
public:
    
    static Enemy* creat()
    {
        Enemy *enemy = new Enemy;
        
        if (enemy && enemy->init())
        {
            
            //            hero autorelease
            
            cout<<"敌人初始化"<<endl;
            
            return enemy;
            
        }
        
        delete enemy;
        
        return nullptr;
        
    }
    
    bool init()
    {
        bool isDone = NSObject::init()? true:false;
        
        
        return isDone;
    }
    
    void move(Button *button)
    {
        cout<<"敌人移动"<<endl;
        
        cout<<"按钮的tag是"<<(button->getTag())<<endl;
        
    }
};




int main(int argc, const char * argv[])
{

    // insert code here...
    
    
    
//    Button *button2 = new Button(2);

//    Button *button3 = new Button(3);
    
    Hero *hero = Hero::creat();
    
    Enemy *enemy = Enemy::creat();
    
    Button *button1 = new Button(1,seletcor_func(Enemy::move),enemy);
   
    button1->touch();

    cout<<"----------------"<<endl;

    Button *button2 = new Button(2,seletcor_func(Hero::move),hero);
    
    button2->touch();
    
    
    
    



    
    return 0;
}

