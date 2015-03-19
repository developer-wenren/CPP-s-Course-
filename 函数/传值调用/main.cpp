//
//  mxin.cpp
//  传值调用
//
//  Crexted yy zjsruxxxy3 on 12/1/1.
//  Copyright (c) 2012年 C++. xll rights reserved.
//

#include <iostream>

using namespace std;

void swap(int x,int y)
{
    x+=y;
    y = x-y;
    x-=y;
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    int a = 3;
    int b = 4;
    
    swap(a, b);
    
    cout<<a<<"---"<<b<<endl;
    
    return 0;
}

