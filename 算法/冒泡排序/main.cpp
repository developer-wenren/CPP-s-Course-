//
//  main.cpp
//  冒泡排序
//
//  Created by zjsruxxxy3 on 15/4/4.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

int  _index =0;
int  _index2 =0;

template <typename T>
void sort2(T *t,int n)
{
    for (int i = 0 ; i<n-1; i++)
    {
        bool is = false;
        
        for (int j = 0; j<n-i-1; j++)
        {
            if (t[j]> t[j+1])
            {
                t[j]+=t[j+1];
                t[j+1] = t[j]-t[j+1];
                t[j]-=t[j+1];
                is = true;
            }
        }
        
        _index2++;
        
        if (!is) {
            break;
        }
    }
    
}


int main(int argc, const char * argv[])
{

    // insert code here...
    
    
    int x;
    
    const int n = 6;
    
    int a[n] = {11,2,3,5,6,4};
    
    for (int i = 0;i<n-1; i++)
    {
        bool isDone = false;
        
        for (int j = 0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                x = a[j];
                
                a[j] = a[j+1];
                
                a[j+1] = x;
                
                isDone = true;
                
            }
            
        }
        
        _index++;
        
        if (!isDone)  // 冒泡的优化，如果 bool与之前赋值一样说明 没有需要排序的数，直接退出
        {
            break;
        }
    }

    for (int k = 0; k<n; k++)
    {
        std::cout<<a[k]<<std::endl;
    }
    
    std::cout<<_index<<std::endl;
    
    int c[5]= {12,45,43,13,54};
    
    sort2<int>(c, 5);
    
    for (int i = 0; i<5; i++)
    {
        std::cout<<c[i]<<std::endl;
    }
    
    std::cout<<_index2<<std::endl;
    
    
    return 0;
}

