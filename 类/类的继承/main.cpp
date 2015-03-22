//
//  main.cpp
//  类的继承
//
//  Created by zjsruxxxy3 on 15/3/22.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

/**
 *  员工类
 *
 */

class Employee {

private:
    
    string employeeid;
    string name;
    
public:
    int age;

    Employee(string employeeid,string name,int age):employeeid(employeeid),name(name),age(age)
    {
        
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


class Technican:public Employee          // 构造函数,析构函数无法被继承，每个唯一
{

private:
    
    string level;
    
public:
    
    Technican(string employeeid,string name,int age,string level):Employee(employeeid,name,age),level(level)   // 子类的构造函数形式：先初始化父类构造函数的数据，然后自己
    {                              //  析构函数的调用顺序相反，先自己，再父类调用
        level = level;
    }
    
    void setLevel(string str)
    {
        level = str;
    }
    
    void display() //  子类的同名的成员函数实现对基类同名函数的覆盖
    {
//        cout<<"编号"<<employeeid<<endl;
        
//        cout<<"姓名"<<name<<endl；
        
        Employee::display();  //  调用基类的公开display方法，访问基类的私有变量
        
//        cout<<"年龄"<<age<<endl;
        
        cout<<"等级"<<level<<endl;
        
    }
    
    void displayLevel()
    {
        level = "007";
        
        cout<<level<<endl;
    }
    
    void setTechnican(string inputid,string inputname,int inputage,string inputlevel)
    {
        
        setEmployee(inputid,inputname,inputage);
        
        level = inputlevel;

    }
    
};

int main(int argc, const char * argv[])
{

    // insert code here...
//    Technican techMan("1213","gary",13);
    
    Technican tec("12138","wrcj",23,"0107");
    
//    tec.setEmployee("12138", "wrcj", 23);
//    tec.setLevel("007");
    
    tec.age = 10;
    //    tec.name = "hah";
    // public继承, 对于 基类的protected 成员 只能访问，不能修改。对于public的可以改
    
    tec.setTechnican("111","haha",24,"0101");
    
    tec.display();
    
    //    tec.display();
    //    tec.displayLevel();
    
    return 0;
}

