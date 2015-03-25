//
//  main.cpp
//  指针
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
    

    
};


int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    Date date(11,22,33);
    
    date.show();
    
    Date *date2;
    
    date2 = &date;
    // date2 指针变量,用于放地址，&表示取变量的地址  *表示取地址的值
    
//    date2->show();

    int c = 11;
   
    int *a = &c;
    
    int *b;

    b = a;
    
    *b = 10;
    
    c = 12;
    
    cout<<(*b)<<sizeof(a)<<c<<&b<<"-"<<b<<"-"<<&c;
                //指针长度为8字节
    
    char *str[10];
    
    char (*str2)[10];
    
    
    
    return 0;
}

