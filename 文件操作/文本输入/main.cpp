//
//  main.cpp
//  文本输入
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
    
    ofstream f("file1.txt");
    char ch;

    if (!f)
    {
        cout<<"file can't open";
        
        exit(2);
    }
    
    
    ch =cin.get();

    while (ch != EOF)
    {
        f.put(ch);
        
        ch = cin.get();
    }
    
    f.close();
 

    return 0;
}

