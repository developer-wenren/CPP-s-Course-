//
//  main.cpp
//  结构体数组
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
    
}date2[2]={
    {2011,2,1},
    {2001,12,32}
};


int main(int argc, const char * argv[])
{

    // insert code here...
    
    Date date[10];
    
    date[0]= {2011,12,1};

    date[1]= {2012,11,2};
    
    
    return 0;
}

