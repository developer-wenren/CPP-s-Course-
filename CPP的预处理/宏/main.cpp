//
//  main.cpp
//  宏
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

#define HELLO_WORD    std::cout << "Hello, World!\n" //无参数

#define SUM(x,y) (x)*(y) // 含参数型，对参数用(),防止运算符干扰

int main(int argc, const char * argv[])
{
    int c = SUM(10, 28);
    
    int d = SUM(12-2, 28);
    
    
    std::cout<<c<<d<<std::endl;
    
    // insert code here...
    HELLO_WORD;
    
    
    return 0;
}

