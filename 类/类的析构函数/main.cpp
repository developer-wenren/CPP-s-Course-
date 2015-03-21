//
//  main.cpp
//  类的析构函数
//
//  Created by zjsruxxxy3 on 15/3/21.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Date
{
    int month;
    int day;
    int year;
    
public:

    Date(int y,int m,int d)
    {
        month = m;
        year = y;
        day = d;
        
    }
    
    void display()
    {
        cout<<year<<"-"<<month<<"-"<<day<<endl;
        
    }
    
    ~Date()
    {
        cout<<year<<"-"<<month<<"-"<<day<<"被析构了"<<endl;
        
    }

};

int main(int argc, const char * argv[])
{

    // insert code here...
    Date *today = new Date(2015,3,20);
    
    Date *tomorrow = new Date(2015,3,21);
    
    delete today;
    
    delete tomorrow;
    
    return 0;

}

