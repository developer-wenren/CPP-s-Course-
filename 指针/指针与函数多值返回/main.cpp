//
//  main.cpp
//  指针与函数多值返回
//
//  Created by zjsruxxxy3 on 15/3/25.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

bool dealWith(int n,int* w,int * e)
{
    bool isSuccess = true;
    
    if (n>100) {
        
        isSuccess = false;

        std::cout<<"too bigger"<<std::endl;
        
    }else
    {
        *w = n*n;
        
        *e = n*n*n;
        
    }
    
    
    return isSuccess;
}

            // 方法重载

int dealWith(int n,int& w,int &e)
{
    bool isSuccess = true;
    
    if (n>100) {
        
        isSuccess = false;
        
        std::cout<<"too bigger"<<std::endl;
        
    }else
    {
        w = n*n;
        
        e = n*n*n;
        
    }
    
    return isSuccess;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    
    //    int p;
    // int *p  空指针 不能用
    int arg;

    int arg2;
    
    int *p = &arg;
                //指针指向的是内存地址

    if (dealWith(12, &arg, &arg2))
    {
        std::cout<<arg<<"-"<<arg2<<std::endl;
        
    }
    
    std::cout<<"over"<<std::endl;
    
    int a;
    int b;
    
    if (dealWith(3, a, b))
    {
        std::cout<<a<<"-"<<b<<std::endl;

    }

    return 0;
}



