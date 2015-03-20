//
//  main.cpp
//  函数指针
//
//  Created by zjsruxxxy3 on 15/3/20.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>


void print(int a)
{
    std::cout <<a<< " Hello, World!\n";

}



int main(int argc, const char * argv[])
{
    
    /**
     *  函数指正的定义 
        void print() ---》 void (*pr)()，然后 函数首地址赋与 pr
     */
    
    void (*pd)(int) = print;
    
    void (*pf)(int);
    pf = print;
    pf(3);
    pd(5);
    
    
    

    // insert code here...
    return 0;
}

