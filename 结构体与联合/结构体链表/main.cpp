//
//  main.cpp
//  结构体链表
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

    Date *nextDate;
                // 利用指针 创建链表，最后的结点的成员指针只指向空
                //  区别于 结构体数组，每个结点的地址不同，更灵活
}date1={2011,2,2},date2={2011,2,3},date3={2011,2,4};

int main(int argc, const char * argv[])
{

    // insert code here...
    Date *head,*d;
    
    date1.nextDate = &date2;
    date2.nextDate = &date3;
    date3.nextDate = NULL;
    
    head = &date1;
    
    d = head;
    
    while (d !=NULL)        // 对于链表结构的数据 考虑While循环获取
    {
        std::cout<<d->year<<d->month<<d->day<<std::endl;
        
        d = d->nextDate;
        
    }
    
    return 0;
}

