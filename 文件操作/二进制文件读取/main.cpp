//
//  main.cpp
//  二进制文件读取
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
    int a[] = {1,23,4,3,5,6,7,8,12},x;
    
    fstream f;
    
    f.open("myfile.dat",ios::out | ios::binary);
    
    if (f.fail())
    {
        cout<<"wrong with file"<<endl;
        
        exit(1);
        
    }
    
    for (int i = 0; i<9; i++)
    {
        f.write((char *)&a[i], sizeof(int));
            // read和write需要字符指针，强转
        
    }
    
    f.close();
    
    f.open("myfile.dat",ios::in|ios::binary);
    
    if (f.fail())
    {
        cout<<"wrong with file"<<endl;
        exit(2);
    }
    
    f.read((char*)&x, sizeof(int));
    
    while (!f.eof())
    {
        cout<<x<<" ";
        
        f.read((char*)&x, sizeof(int));
    }
    
    cout<<endl;
    
    f.close();
    
    
    return 0;
}

