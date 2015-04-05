//
//  main.cpp
//  函数模板
//
//  Created by zjsruxxxy3 on 15/4/4.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

template <typename T>
T Max(T a, T b)
{
    return a>b? a:b;
    
}



int main(int argc, const char * argv[])
{

//    cout<< Max<int>(100,200);
    
    cout<<Max("d", "c");
    
    cout<<Max<string>("d", "c");

//    auto
    
    
    
    
    // insert code here...
    return 0;
}

