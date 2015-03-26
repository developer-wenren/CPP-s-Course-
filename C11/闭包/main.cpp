//
//  main.cpp
//  闭包
//
//  Created by 软件开发 on 15/3/26.
//  Copyright (c) 2015年 软件开发. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    
    int a = 100,c =102,d=103,b =101;
    
    auto label_func = [&,d]()  // [] 补做列表
    {
        cout<<"helloWord"<<endl;
        
//        c = -400;  const d
        
        int y = a+b+c+d;
        
        return y;
    };
    
    cout<<label_func()<<endl;
    
//    []()mutable->int
//    {       // mutable -> 闭包内可变
//        
//    };
    
    // [capture](parameters)mutabel->return_type{statement};
    
    
    return 0;
}
