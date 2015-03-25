//
//  main.cpp
//  类的构造函数
//
//  Created by zjsruxxxy3 on 15/3/21.
//  Copyright (c) 2015年 C++. All rights reserved.
//
/**
 *  完成对对象的初始化操作，给private，protected 成员变量赋值
 *
 *
 */

#include <iostream>

using namespace std;

class Date
{
    int month;
    int day;
    int year;
    
public:

    Date()      // 缺省构造函数:构造函数无参数
    {
        day = 0;
        year = 0;
        month = 0;
        cout<<this->year<<" Date() ";
        
    }
                //      构造函数的重载
    Date(int y,int m,int d)
    {
        month = m;
        year = y;
        day = d;
        cout<<this->year<<" Date(int y,int m,int d) ";

    }
    
    void display()
    {
        cout<<year<<"-"<<month<<"-"<<day<<endl;
        
    }
    
    void setDate(int y,int m,int d)
    {
        year = y;
        month = m;
        day = d;
    }
    
            // copy构造函数,也是系统默认生成
    Date(const Date &d)
    {
        year = d.year;
        month = d.month;
        day = d.day;
        cout<<this->year<<"copy构造函数"<<endl;
    }
    
    ~Date()
    {
        cout<<this->year<<"析构函数"<<endl;

    }
};



#warning 仅仅是返回类型的不同,不能重载。
int func(int a,int b)
{
    return a*b;
};
    
float func(float a,int b)
{
    return a*b;
};

    

int main(int argc, const char * argv[])
{

    // insert code here...
    /*
    Date today,tomorrow;
    
    today.setDate(2015, 3, 20);
    
    tomorrow.setDate(2015, 3, 21);
    */
    

    Date today(2015,3,20),tomorrow;
    
    today.display();
    
    tomorrow.display();
    
    Date copyToday = today;      // 使用 copy构造方法;
    
    copyToday.display();
    

    

    Date *today2 = new Date(2015,3,20);
    
    Date *copyDay2 = today2;          // 浅拷贝
    
    printf("%p---%p\n",copyDay2,today2);

    cout<<"_______"<<endl;
    
    Date *d1 = new Date(1,1,1);
    Date *d2 = new Date(2,2,2);
    Date da = *d2;
    delete d1;
    delete d2;          // 谁先delete谁先析构
    da.display();
    
    
    Date d11(1,1,1);
    
    Date d22(2,2,2);//后构造先析构
    
    // 后入先出，栈的特点。
    
    
    return 0;
}

