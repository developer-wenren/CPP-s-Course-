//
//  main.cpp
//  Vector
//
//  Created by zjsruxxxy3 on 15/4/5.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printF(vector<T> t)
{
    
    for (auto iter2 = t.begin(); iter2!=t.end(); iter2++)
    {
        cout<<*iter2<<" ";
        
    }
    
    
}

template <typename T>
void printF2(vector<T> t)
{
    for (int i = 0; i< t.size(); i++)
    {
        cout<<t.at(i)<<" ";
    
    }
}

template <typename T>
void printF3(vector<T> t)
{
    for (auto i :t)
    {
        cout<<i<<" ";
        
    }
}


int main(int argc, const char * argv[])
{

    // insert code here...
    
    
    double a[7] = {3.5,6.7,1.1,1.3,1.5,2.1,2.5};
    
    vector<double> v1(a,a+7);
    
    vector<double>::iterator iter = v1.begin();
                                // 迭代器对象先声明赋值后在使用
 
    while (iter != v1.end())
    {
        cout<<*iter<<endl;
        
        iter++;
        
    }
    
//    cout<<v1.at(7);
    
    cout<<"------"<<endl;
    
    printF(v1);
  
    cout<<endl<<"------"<<endl;
    
    printF2(v1);
    
    cout<<endl<<"------"<<endl;
    
    printF3(v1);
    
    return 0;
}

