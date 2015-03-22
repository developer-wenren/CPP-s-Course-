//
//  main.cpp
//  类的纯虚函数
//
//  Created by zjsruxxxy3 on 15/3/22.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

/**
 *  含纯虚函数的类 为抽象类，且不能对基类进行定义。
 *
 */
using namespace std;

class Employee {
    
protected:
    
    string employeeid;
    
    string name;
    
    int age;
    
public:
    
    void setEmployee(string id,string n,int a)
    {
        employeeid = id;
        name = n;
        age = a;
        
    }
    
    virtual void display()=0;
    
};

class Technican:public Employee
{
    
private:
    
    string level;
    
public:
    
    virtual void display()
    {
        
        cout<<"编号"<<employeeid<<endl;
        
        cout<<"姓名"<<name<<endl;
        
        cout<<"年龄"<<age<<endl;
        
        cout<<"等级"<<level<<endl;
    }
    
    
    
    void setTechnican(string inputid,string inputname,int inputage,string inputlevel)
    {
        
        setEmployee(inputid,inputname,inputage);
        
        level = inputlevel;
        
    }
    
};

class Manager:public Employee
{
protected:
    
    string post;
    
public:
    
    virtual void display()
    {
        cout<<"编号"<<employeeid<<endl;
        
        cout<<"姓名"<<name<<endl;
        
        cout<<"年龄"<<age<<endl;
        
        cout<<"管理"<<post<<endl;
        
    }
    
    void setManager(string inputid,string inputname,int inputage,string apost)
    {
        
        setEmployee(inputid,inputname,inputage);
        
        post = apost;
        
    }
};

int main(int argc, const char * argv[])
{

    // insert code here...
    
    Employee *p;
    
    Technican tech;
    
    tech.setTechnican("1213", "wrcj", 12, "9");
    
    Manager man;
    
    man.setManager("321", "haha", 32, "lala");
    
    p = &tech;
    p->display();
    
    p = &man;
    p->display();
    
//    Employee emp;       含纯虚函数的抽象类只可以定义指向其的指针，不能定义其对象
    
    return 0;
}

