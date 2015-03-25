//
//  main.cpp
//  文件管理应用
//
//  Created by zjsruxxxy3 on 15/3/25.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

#include <fstream>

#include <string>

using namespace std;

struct student {
    
    char name[10];
    
    int grade;
    
};

void setupDate()
{
    fstream f("data.dat",ios::out|ios::binary);
    
    if (!f)
    {
        cout<<"file wrong"; exit(1);
    }
    
    student x;
    
    cout<<"请输入学生的记录"<<endl;
    
    char *a;

    cin>>a;

    int b = 10;
    
    int &s = b;
    s = 0;
    
    
    while (a!=(char*)1)
    {
//        x.name = a;
        cin>>x.grade;
        
        f.write((char*)&x, sizeof(x));
        
    }
    
    f.close();
    
    cout<<"输入结束"<<endl;
    
}



int main(int argc, const char * argv[])
{

    setupDate();
    
    return 0;
}

