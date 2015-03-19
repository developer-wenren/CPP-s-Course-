//
//  main.cpp
//  传地址调用
//
//  Created by zjsruxxxy3 on 12/1/1.
//  Copyright (c) 2012年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
    *x=*x+*y;

    *y=*x-*y;
    
    *x=*x-*y;
    
}


int main(int argc, const char * argv[])
{

    // insert code here...
    int a = 3 ;
    int b = 4 ;
    
    swap(&a, &b);
    
    cout<<a<<"---"<<b<<endl;
    
    return 0;
}



