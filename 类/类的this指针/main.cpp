//
//  main.cpp
//  类的this指针
//
//  Created by zjsruxxxy3 on 15/4/2.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Date {
    int year;
    int month;
    int day;
    
    
public:
    
    Date(int year,int month,int day):year(year),month(month),day(day)
    {
        
    }
    
    
    Date DateUp()  // 赋值 给新对象,跟本身对象无关
    {
        year++;
        
        return *this;
    }
    
    Date& DateUp2() // 引用 本身对，能改变本身对象
    {
        year++;
        
        return *this;
    }
    
    void display()
    {
        cout<<year<<month<<day<<endl;
        
    }
};

int main(int argc, const char * argv[])
{

    // insert code here...
    
    Date d2 = Date(2015, 4, 2);

    d2.display();

//    d2.DateUp();
    
//    d2.display();

    
    d2.DateUp2().DateUp2();
    
    d2.display();
    
    d2.DateUp().DateUp().DateUp().DateUp().display();  // 匿名对象的输出，
    
    d2.display();
    
    

    return 0;
}

