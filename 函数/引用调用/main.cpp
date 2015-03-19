//
//  main.cpp
//  引用调用
//
//  Created by zjsruxxxy3 on 12/1/1.
//  Copyright (c) 2012年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    a+=b;
    b=a-b;
    a-=b;
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    int a = 3;
    
    int b = 4;
    
    swap(a,b);
    
    cout<<a<<"+++"<<b<<endl;
    
    return 0;
}

