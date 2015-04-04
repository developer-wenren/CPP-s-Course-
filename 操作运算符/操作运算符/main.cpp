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
    
//    ostream& operator<<()
    SpecialNum operator+(SpecialNum &s)  // +运算符的成员函数方式重载
    {
        
        SpecialNum d = SpecialNum(s.a*this->b+s.b*this->a,s.b*this->b);
        
//        SpecialNum(s.a*this->b+s.b*this->a,s.b*this->b)
        return d ;
    }
    
    
    // 友元函数（全局） 给自定义类写 cout<< 的方法/ cout--ostream对象，单例不让创建对象（cout输出运算符的重载）
   friend  ostream& operator<<(ostream &o,SpecialNum sp)
    {
        return o<<sp.a<<"/"<<sp.b;
    }
    
    friend istream& operator>>(istream &i,SpecialNum &sp)
    {
        char ch;
        
        return i>>sp.a>>ch>>sp.b;
        
    }
    
    SpecialNum operator-(SpecialNum &sp)
    {
        return SpecialNum(this->a*sp.b-this->b*sp.a,this->b*sp.b);
        
    }

};

//ostream& operator<<(&o,sp);

int main(int argc, const char * argv[])
{

    // insert code here...
    SpecialNum sp(2,3);
    SpecialNum sp2(1,3);
    
    
//    cout<<sp;
    SpecialNum sp3 = sp2+sp;
//    cout<<(sp+sp2);
//    cout<<sp3;
    
//    SpecialNum a;
    
#pragma mark cin<< 输入符号的重载
//    cout<<sp;
    
//    cin>>sp;
    
//    cout<<sp<<endl;
    
    SpecialNum sp4 = sp - sp2;
    
    cout<<sp4<<endl;
    
    cout<<sp3<<endl;
    
    
    
    return 0;
}

