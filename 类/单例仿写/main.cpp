//
//  main.cpp
//  单例仿写
//
//  Created by zjsruxxxy3 on 15/4/3.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

class Application;

static Application *application = nullptr; // C方式声明

class Application
{
private:
    Application(){};                      // 将构造和拷贝构造 私有化，不让在类外调用new和对象赋值
    Application(const Application &app){};
    
    //static Application *application;
    
public:
    
    
    static Application *sharedApplication()
    {
        if (nullptr == application )
        {
            application  = new Application;
        }
        
        return application;
        
    }
    
    
};


//static Application * Application::application //  C++声明方式



int main(int argc, const char * argv[])
{

    // insert code here...
    
    Application *app = Application::sharedApplication();
    
    std::cout<<app<<std::endl;
    
    Application *app2 = Application::sharedApplication();
    
    std::cout<<app2<<std::endl;
    
    Application *app3= Application::sharedApplication();
    
    std::cout<<app3<<std::endl;
   
   
    

    return 0;
}

