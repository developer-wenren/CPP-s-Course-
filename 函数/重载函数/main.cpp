//
//  main.cpp
//  重载函数
//
//  Created by zjsruxxxy3 on 15/3/19.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace::std;

float add(float a,int b)
{
    return a+b;
}

float add(int c,int b)
{
    return c+b;
    
}

float add(double c,float e)
{
    return c+e;
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    float e = add(3.0, 2.0);
    
    float d = add(5, 3);
    
    long x = 10;
    
    double y;
    
    y = static_cast<double>(x);
    
//    float c = add(3.0,2);
    
    cout<<e<<d;
    
    return 0;
}

