//
//  main.cpp
//  变量作用域
//
//  Created by zjsruxxxy3 on 12/1/1.
//  Copyright (c) 2012年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

int i = 10; // 变量的全局作用域

static int j = 10; // 变量的文件作用域


int main(int argc, const char * argv[])
{

    // insert code here...
    {
    int j=5,k;   // 变量的块作用域。
    
    ::j =::j+4;
    
    k = ::j+j;
    
    cout<<"j->"<<j<<" ::j->"<<::j<<" k->"<<k<<endl;
    
    }
    
    cout<<"::j->"<<j<<endl;
    
    return 0;
}

