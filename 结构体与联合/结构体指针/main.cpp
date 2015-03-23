//
//  main.cpp
//  结构体指针
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

struct Date     //  推荐先定义再声明
{
    int year;
    int month;
    int day;
    
}date1={2013,02,2},date2={2011,12,12};

/**
 *  结构体指针函数
 */

void displayDate(Date *d)
{
    std::cout<<d->year<<d->month<<d->day<<std::endl;
    
}


int main(int argc, const char * argv[])
{

    // insert code here...
    Date *d;
    d = &date1;

                    //  结构体指针访问方式 （*p).xxx 或者 p->xxx
                    // 对于结构体指针必须先有指向的变量，才能使用
    std::cout<<(d->year)<<(*d).month<<d->day;
    
    Date *p = &date1;
    
    
    
    displayDate(p);

    return 0;
}

