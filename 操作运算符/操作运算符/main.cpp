//
//  main.cpp
//  操作运算符
//
//  Created by zjsruxxxy3 on 15/3/24.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;
class SpecialNum
{
private:
    int a;
    int b;
public:
    SpecialNum(int a,int b):a(a),b(b)
    {
        
    }
    
    // 友元函数（全局） 给自定义类写 operator<< 的方法
   friend  ostream& operator<<(ostream &o,SpecialNum sp)
    {
        return o<<sp.a<<"/"<<sp.b;
    }

};

//ostream& operator<<(&o,sp);

int main(int argc, const char * argv[])
{

    // insert code here...
    SpecialNum sp(2,3);
    
    cout<<sp;
    
    return 0;
}

