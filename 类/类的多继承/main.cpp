//
//  main.cpp
//  类的多继承
//
//  Created by zjsruxxxy3 on 15/3/22.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;


class Birthday
{
public:
    int year;
    int day;
    int month;
    
    Birthday()
    {
        cout<<"birthday constructor done"<<endl;
    }
    
    void display()
    {
        cout<<"++++"<<endl;
    }
};

class Employee {
    
protected:
    
    string employeeid;
    string name;
    int age;

public:
    
    Employee()
    {
        cout<<"employee constructor done"<<endl;
    }
    
    void setEmployee(string id,string n,int a)
    {
        employeeid = id;
        name = n;
        age = a;
        
    }
    
    void display() //   成员方法(函数)
    {
        cout<<"编号"<<employeeid<<endl;
        cout<<"姓名"<<name<<endl;
        cout<<"年龄"<<age<<endl;
        
    }
    
};


class Teacher
{
protected:

    string name;
    
    int age;
    
    string course;
    
public:
    
    void display()
    {
        cout<<"姓名"<<name<<endl;
    
        cout<<"年龄"<<age<<endl;
        
        cout<<"课程"<<course<<endl;
    }
    
    void setTeacher(string n,int a,string c)
    {
        name = n;
        
        age = a;
        
        course = c;
        
    }
    
    Teacher()
    {
        cout<<"teacher constructor done"<<endl;
    }
    
};

class Technian: public Employee,public Teacher
{
public:
    
    Birthday bith;
    
    void setTechian(string aId,string aName,int aAge,string aCourse)
    {
        employeeid = aId;
        
        Employee::name = aName;         //如果有一样 使用 类:: 显示指明访问哪个基类的成员变量
        
        Employee::age = aAge;
        
        course = aCourse;
    }
    
    void displayTechian()
    {
        cout<<"编号"<<employeeid<<endl;
        
        cout<<"姓名"<<Employee::name<<endl;
        
        cout<<"年龄"<<Employee::age<<endl;
        
        cout<<"课程"<<course<<endl;

    }
    
    Technian()
    {
        bith.display();
        
        cout<<"technian constructor done"<<endl;
    }

};


int main(int argc, const char * argv[])
{

    // insert code here...
    
    cout<<"------"<<endl;
    Technian technianMan;
    
//    technianMan.setTechian("121","dodo",22,"math");
    
//    technianMan.displayTechian();
    
    //  构造方法 先父类，再类内的成员对象，最后自己
    
    return 0;
}

