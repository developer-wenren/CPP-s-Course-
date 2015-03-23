//
//  main.cpp
//  命名空间
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;    // using指令，全部免调用命名空间

using std::cin;        // using声明，给指定的免调用命名空间，推荐

using std::cout;


namespace RunningMan    // 有名命名空间
{
    int a = 1;
    int b;
}

namespace haha              // 无名的命名空间
{
    int a = -1;
    
    int d;
}

using namespace haha;
using namespace RunningMan; // 同时免调用命名空间，变量a获取不明

//using namespace ;

int main(int argc, const char * argv[])
{

    int c = -2;     // 优先局部变量，对于无名空间
    
//    int a = -1;     // 根据给定的命名空间取变量
    
    // insert code here...
    cout << "Hello, World!\n"<<RunningMan::a<<c<<haha::a;
                                        //域名解析运算符：：
    
    return 0;
}

