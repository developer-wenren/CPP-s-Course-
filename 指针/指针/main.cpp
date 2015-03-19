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

    
   
    
    
    
    return 0;
}

