//
//  main.cpp
//  枚举
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

enum light
{
    red,
    yellow,
    green
}lightA;
                // 枚举 配合 if switch使用

int main(int argc, const char * argv[])
{
    lightA = yellow;
    
    // insert code here...
    std::cout <<lightA;
    
    return 0;
}

