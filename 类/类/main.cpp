//
//  main.cpp
//  类
//
//  Created by zjsruxxxy3 on 15/3/21.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;
/**
 *  员工类
 *
 */

class Employee {
    string employeeid;
    string name;
    int age;
    
public:
    
    Employee(string employeeid,string name,int age):employeeid(employeeid),name(name),age(age)
    {
        
    }
    void display() //   成员方法(函数)
    {
        cout<<"编号"<<employeeid<<endl;
        cout<<"姓名"<<name<<endl;
        cout<<"年龄"<<age<<endl;
        
    }
    void display2();
    
};

void Employee::display2() // 也可以先定义,实现
{
    cout<<"编号"<<employeeid<<"姓名"<<name<<"年龄"<<age<<endl;
    
}


int main(int argc, const char * argv[])
{
    // insert code here...
    
    Employee employeeA("12138","haha",38);
    
    employeeA.display();
    
    employeeA.display2();
    
    Employee *employeeB = new Employee("12139","lili",20);
    
    employeeB->display();
    
    employeeB->display2();

    
    return 0;
}


