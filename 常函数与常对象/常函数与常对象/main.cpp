//
//  main.cpp
//  常函数与常对象
//
//  Created by zjsruxxxy3 on 15/3/25.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Date
{
public:
    
    const int day;
    
    int year;
    
    int month;
    
    Date(int year,int m,int day):year(year),day(day)
    {
        month = m;
    }
    
    void display(Date *d) const;
    
    void pr()
    {
        cout<<this->year<<"-"<<this->month<<"-"<<this->day<<endl;
        
        
    }
    
};


void Date::display(Date *d) const
{
    cout<<this->year<<"-"<<this->month<<"-"<<this->day<<endl;
    
    cout<<d->year<<endl;
    
    //    this->year = d->year;  const限制不让在函数内改变类成员变量的值
    
    Date date3(1,2,3);
    
//    date3.day=d->day;
    
//    cout<<b<<endl;
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    Date last(2015,3,24);
    
    Date date(2015,3,25);
    
    date.display(&last);
    
//    cout<<date.day;
    
    const Date date2(2015,4,4);
    
//    date2.pr();  wrong
    date2.display(&last);
        // 常对象只能访问常函数,不让对象的属性改变,不给this指针传递
    
    
    return 0;
}

