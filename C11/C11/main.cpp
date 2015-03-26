//
//  main.cpp
//  C11
//
//  Created by 软件开发 on 15/3/26.
//  Copyright (c) 2015年 软件开发. All rights reserved.
//

#include <iostream>

class Object
{
    virtual void func() = 0;
    
    virtual void func2() = 0;

};

class node:public Object
{
    void func() override //检查重写父类函数时函数名是否一致
    {
        
    }

    void func2() final  // 限制子类的重写
    {
        
    }

};

class layer:public node
{
    void func(){};
    
//    void func2(){};
    
    
};

int main(int argc, const char * argv[])
{
    // insert code here...
    
    
    
    return 0;
}
