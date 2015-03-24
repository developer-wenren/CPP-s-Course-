//
//  main.cpp
//  结构体与联合
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

/**
 *  区别于数组，储存不同类型的数据
 *
 */

struct Date     //  推荐先定义再声明
{
    int year;
    int month;
    int day;
    
}date1,date2 = {2015,12,4};
                    // 结构体变量的两种声明方式.
Date date4;

struct Diary
{
    Date date;
    int num;
};

int main(int argc, const char * argv[])
{
    date1.year = 2015;
    
    Date date3;
    date3.year = 2016;
    
    date4.year = 2014;

    Diary anny;
    
    anny.date.year = 1993;
    
    // insert code here...
    std::cout<<date2.year<<date2.month<<date3.year<<date4.year<<anny.date.year << std::endl;


    
    
    
    return 0;
}

