//
//  main.cpp
//  类的多态
//
//  Created by zjsruxxxy3 on 15/3/22.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

/**
 *  虚函数 + 动态关联机制 ===》多态
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
    
    virtual void display() //       virtual 虚函数关键字，实现多态的前提
    {                           //      若没有，只会执行基类的函数
        cout<<"编号"<<employeeid<<endl;

        cout<<"姓名"<<name<<endl;

        cout<<"年龄"<<age<<endl;
        
    }
    
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

    Manager a;
    
    a.setManager("1","wrcj",12,"boss");
    
    Technican b;
    
    b.setTechnican("2","haha",21,"9");
    
    
    Employee *p;           // 让指向基类的指针 来调用子类的虚函数
    
    p = &a;
    
    p->display();          // 隐式创建指针VPTR，指向虚函数的内存地址,调用时形成动态关联。
    
    p = &b;
    
    p->display();
    
    
    
    
    
    return 0;
}

