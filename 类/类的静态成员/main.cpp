//
//  main.cpp
//  类的静态成员
//
//  Created by zjsruxxxy3 on 15/3/21.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Date
{
    int month;
    int day;
    int year;
    
public:
    
    static int n;       // 类的静态成员变量--不属于任何对象，
                        //一份内存的值被该类所有对象共享
                        // 静态成员变量只能在类外初始化
    
    
    
    Date(int y,int m,int d)
    {
        month = m;
        year = y;
        day = d;
        n++;
        
    }
    
    Date(const Date &d)
    {
        year = d.year;
        month = d.month;
        day = d.day;
        n++;
        
    }
    
    ~Date()
    {
        n--;
    }
    
    /**
     *  静态方法只能访问静态成员
     */
    static void static_display()
    {
        cout<<"date对象的个数"<<n<<endl;
    }
    
    void display()
    {
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
    
};

int Date::n = 0;

int main(int argc, const char * argv[])
{

    // insert code here...

    Date date1(2015,3,20);
    
    cout<<"date 的个数"<<Date::n<<endl;
    
    cout<<"date 的个数"<<date1.n<<endl;
    
    // 每个成员都能访问，且是同一个。
    
    Date date2 = date1;
    
    cout<<"date 的个数"<<Date::n<<endl;
    
    cout<<"date 的个数"<<date2.n<<endl;
    
    cout<<"date 的个数"<<date1.n<<endl;
    
    date1.display();
    
    date2.display();
    
    Date::static_display();
    
    return 0;
    
}

