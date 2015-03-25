//
//  main.cpp
//  文本输出
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
    
    ifstream f("helloWord.txt",ios::in);
    
    char ch;


    if (!f)
    {
        cout<<"can't open file"<<endl;
        exit(2);
        
    }

    int i = 0;

    
    while (f.get(ch))
    {
        cout<<ch;
        
        if (ch == ' ')
        {
            i++;
        }
        
    }
    
    cout<<endl<<"string count is "<<i<<endl;
    
    f.close();
    


    return 0;
}

