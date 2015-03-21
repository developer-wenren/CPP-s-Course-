//
//  main.cpp
//  静态成员指针
//
//  Created by zjsruxxxy3 on 15/3/21.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

typedef  const int *Static_VAR;

typedef void (*Static_Function)();

class A
{
    
public:
    
    static void function()
    {
        std::cout << "Hello, World!\n";
        
    }
    static const int a = 10;

    
};

int main(int argc, const char * argv[])
{

    // insert code here...
    
    Static_Function static_func = &A::function;
    
    (*static_func)();
    
    
    return 0;
}

