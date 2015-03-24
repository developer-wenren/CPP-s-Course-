//
//  main.cpp
//  联合
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

/**
 *  联合中使用自定义类型对成员定义时，不能使用构造，析构，拷贝构造
 */

using namespace::std;

class Date;

union unknowvar     // 联合变量的成员共享一块内存空间，常常引入新变量 “标志”
{
    int asint;
    
    double asdouble;
    
    float asfloat;
//    string d;  会报错
    
    Date day();
    
    
}var1,var2;

class Date
{
    Date(){
        
        cout<<a;
        
    }
    ~Date(){
        
    }
    
    Date(const Date  &date)
    {
        
    }
    
    int a = 10;
    
  
    
};

void display(unknowvar c,int flag)
{
    
    switch (flag)
    {
        case 0:
            cout<<c.asint;
            break;
        case 1:
            cout<<c.asfloat;
            break;
        case 2:
            cout<<c.asdouble;
            
        default:
            break;
            
    }
    
    cout<<endl;
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    
    unknowvar d;
//    d.asint = 1.2;
//    d.asfloat = 1.2;
    d.asdouble = 1.321;
    
    display(d, 2);
    
    return 0;
}

