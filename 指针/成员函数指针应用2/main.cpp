//
//  main.cpp
//  成员函数指针应用2
//
//  Created by zjsruxxxy3 on 15/4/1.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Numbers;


typedef int(Numbers::*FUNC)();

#define selector(SET) (&Numbers::SET)

struct Numbers
{
    int a;
    int b;
    
    Numbers(int a,int b):a(a),b(b)
    {
        
    }
    
    int add()
    {
        return a+b;
    };
    
    int sub()
    {
        return a-b;
        
    };
    
    int multiply()
    {
        return a*b;
    };
    

};

void setPrintFunc(Numbers n,FUNC f)
{
    cout<<(n.*f)()<<endl;
    
}


int main(int argc, const char * argv[])
{
    
//    f = &Numbers::sub();
    
    Numbers n = Numbers(2, 5);

    setPrintFunc(n,selector(multiply));
    
    setPrintFunc(n, selector(add));
    
    return 0;
    
}

