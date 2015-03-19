//
//  main.cpp
//  数组调用
//
//  Created by zjsruxxxy3 on 12/1/1.
//  Copyright (c) 2012年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

/**
 *  数组名为一个指针，其指向该数组元素的首地址（常量指针）
 *
 *  @param a 数组首地址
 *  @param n 数组长度
 */
void sortTest(int a[],int n)  // a[] 可以用 *a代替
{
    int i,j,k;
    
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]<a[j])
            {
                k = a[i];
                
                a[i] = a[j];
                
                a[j] = k;
                
            }
        }
    }
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    
   int b[] = {10,20,13,15,21};
    
    sortTest(b, 5);
    
    for (int i = 0; i<5; i++)
    {
        cout<<b[i]<<">";
        
    }
    
    cout<<endl;
    
    return 0;
}

