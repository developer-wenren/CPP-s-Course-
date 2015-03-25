//
//  main.cpp
//  函数指针
//          指向某个函数的指针，指针指向其函数首地址
//  Created by zjsruxxxy3 on 15/3/20.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>



void print(int a)
{
    std::cout <<a<< " Hello, World!\n";

}

typedef  int (*FunctionPoint)(int);     // typedef简化函数指针的定义方式 FunctionPoint

int test(int a)
{
    return a;
}

void inc(int *val)
{
    (*val)++;
}

int main(int argc, const char * argv[])
{
    FunctionPoint p;
    
    p=test;

    std::cout<<p(10)<<"--"<<(*p)(15)<<std::endl;
    
    /**
     *  函数指正的定义 
        void print() ---》 void (*pr)()，然后 函数首地址赋与 pr
     */
    
    void (*pd)(int) = print;
    
    void (*pf)(int);
    
    pf = print;
    pf(3);
    
    (*pd)(5);
    
    printf("%p\n",pf);
    
    printf("%p\n",print);
    
    std::cout<<"-------------"<<std::endl;
    
    void (*fun)(int *);
    int a=3;
    fun=inc;
    (*fun)(&a);
    printf("%d\n", a);

    // insert code here...
    return 0;
}


