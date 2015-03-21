//
//  main.cpp
//  类的友元函数
//
//  Created by zjsruxxxy3 on 15/3/21.
//  Copyright (c) 2015年 C++. All rights reserved.
//

/**
 *  友元：特定函数或者类，能访问 某个类的私有变量
 *      友元函数，友元类
 */
#include <iostream>
#include <string>

using namespace std;

class DateFriend;

class Date
{
private:
    int month;
    int day;
    int year;
    
    /**
     *  友元类 --需要先声明类
     */
    friend DateFriend;
    
public:
    
    static int n;

    /**
     *  友元函数，修改DATE中的私有成员 year，month，day
     */
    friend void modifyDate(Date &date,int year,int month,int day);
    
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
    
    void display()
    {
        cout<<year<<"-"<<month<<"-"<<day<<endl;
        
    }
};

class DateFriend
{
public:
    void modifyDate2(Date &date,int year,int month,int day)
    
    {
        date.year = year;
        date.month = month;
        date.day = day;
        cout<<year<<"-"<<month<<"-"<<day<<endl;

    }
};


void modifyDate(Date &date,int year,int month,int day)
{
    date.year = year;
    date.month = month;
    date.day = day;
    
}

int Date:: n = 0;

int main(int argc, const char * argv[])
{

    // insert code here...
    Date date1(2015,3,20);
    
    Date date2 = date1;
    
    date1.display();
    
    date2.display();
    
    modifyDate(date1,2014,3,20);
    
    date1.display();
    
    modifyDate(date2, 2016, 3, 20);
    
    date2.display();
    
    DateFriend dateFriend;
    
    dateFriend.modifyDate2(date1, 2017, 3, 20);
    
    dateFriend.modifyDate2(date2, 2018, 3, 20);

    return 0;
}

