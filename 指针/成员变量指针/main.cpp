//
//  main.cpp
//  成员函数指针
//
//  Created by zjsruxxxy3 on 15/3/19.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Date
{
    
public:
    
    int year;
    int month;
    int day;
    
    Date(int year,int month,int day):year(year),month(month),day(day)
    {
        this->year = year;
        this->month = month;
        this->day = day;
        
    }
    
    void show()
    {
        cout<<year<<" "<<month<<" "<<day<<endl;
        
    }
    
    void print(int Date::*p)
    {
        cout<<this->*p<<endl;
    
//        printf("%p",p);
        
    }
    
};


int main(int argc, const char * argv[])
{
    
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Date date(11,22,33);
    
    date.show();
    
    int Date:: *p = &Date::month; // 成员变量指针  指向 成员变量地址
    
    date.print(&Date::year);   // int Date:: *p = &Date::month
    
    date.print(p);
    
    date.print(&Date::day);

    return 0;
}
