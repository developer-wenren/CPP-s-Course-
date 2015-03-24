//
//  main.cpp
//  结构体函数
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using std::cout;

struct Date     //  推荐先定义再声明
{
    int year;
    int month;
    int day;
    
}date1={2013,02,2};

void display(Date date)     //把 结构体作为函数的参数 使用
{
    cout<<date.year<<date.month<<date.day<<std::endl;
    
}

Date modifyDate(Date date)      // 传入结构体变量，返回修改后的变量

{

    date.year++;
    date.month++;
    date.day++;
    
    return date;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    display(date1);
    
    Date date2 = modifyDate(date1);
    
    display(date2);
    
    return 0;
}

