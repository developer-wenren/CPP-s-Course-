//
//  main.cpp
//  文件操作
//
//  Created by zjsruxxxy3 on 15/3/25.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    int a[10] ={1,2,3,4,5,6,7,8,9,10},x;
    
    fstream f;
    
    f.open("helloWord.txt",ios::out);
    
    if (f.fail())
    {
        cout<<"文件打开失败"<<endl;
        
        exit(1);
    }
    
    for (int j = 0; j<10; j++)
    {
        f<<a[j]<<" ";
    }
    
    f.close();
    
    f.open("helloWord.txt",ios::in);
    
    if (f.fail())
    {
        cout<<"文件打开失败"<<endl;
        
        exit(2);
    }
    
    while (!f.eof())
    {
        f>>x;
        
        cout<<x<<" ";
     
    }

    cout<<endl;
    
    f.close();
    
    return 0;
}

