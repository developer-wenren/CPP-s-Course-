//
//  main.cpp
//  类模板
//
//  Created by zjsruxxxy3 on 15/4/4.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

template<typename T,const int n =10> class Buffer
{
    T a[n];
    
    int size;
    
public:
    
    Buffer()
    {
        size = 0;
        
        cout<<"---";
        
    }
    
    void push(T p)
    {
        a[size++] = p;
        
    }
    
    T& get(int y)
    {
        return a[y];
        
    }
    
};

template <typename T>
class Operation {
    
public:
    
    T a;
    Operation(T a):a(a)
    {
        
    }
    void display()
    {
        cout<<"a:"<<a<<endl;
    }
    
    
};


int main(int argc, const char * argv[])
{

    // insert code here...
     const int a = 30;
    
    Buffer<double,a> buffer;

    for (int i = 0; i<5; i++)
    {
        buffer.push(i*3.14);
        
    }
    
    cout<<"----"<<endl;
    
    cout<<buffer.get(4)<<endl;
    
    Buffer<int>();
    
    Operation<int> op(22);
    
    op.display();
    
    
    

    return 0;
}

