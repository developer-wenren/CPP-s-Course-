//
//  main.cpp
//  成员函数指针
//
//  Created by zjsruxxxy3 on 15/3/20.
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

    }
    
    void show()
    {
        cout<<year<<"-"<<month<<"-"<<day<<endl;
        
    }
    
};
typedef void (Date::*DATE_FUNC)();

int main(int argc, const char * argv[])
{

    // insert code here...
    Date *today = new  Date(2015,3,20);
    
    today->show();
    
    cout<<"--------"<<endl;
    
    DATE_FUNC dayFunc = &Date::show;
    
    void (Date::*pd)() =  &Date::show;
    
            // 利用Date:: 隐式传入this指针
    (today->*pd)(); //*pd 函数首地址 = show
//    (today->show)() 防止被识别为 * + pd(),加括号
    
    cout<<"--------"<<endl;

    (today->*dayFunc)();
    
    return 0;
}

