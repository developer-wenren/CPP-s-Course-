//
//  main.cpp
//  封装与内聚
//
//  Created by zjsruxxxy3 on 15/4/4.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Language
{
public:
    virtual void nativeLanguage() = 0;
    

};

class Chinese:public Language
{
public:
    void nativeLanguage()
    {
        cout<<"speaking Chinese"<<endl;
    }
    
};

class English :public Language
{
public:
    void nativeLanguage()
    {
        cout<<"speaking English"<<endl;
    }
};

class French :public Language
{
public:
    void nativeLanguage()
    {
        cout<<"speaking French"<<endl;
    }
};

class Person
{
    Language *language;
    
public:
    Person(Language *language):language(language)
    {
        
    }
    
    void speakWhat()
    {
        language->nativeLanguage();
        
    }
    
};



int main(int argc, const char * argv[])
{

    // insert code here...
    
    English *en = new  English;
    
    Chinese *cn = new Chinese;

    French *fr = new French;

    
    Person *lili = new Person(cn);  // 策略模式 : cn,en,fr
                                    // 优点：创建方便
                                    // 缺点：暴露实现方法
    
    
    lili->speakWhat();
    
    
    
    

    return 0;
}

