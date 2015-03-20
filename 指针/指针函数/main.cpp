//
//  main.cpp
//  指针函数
//             带有指针的函数,返回某个类型的指针
//  Created by zjsruxxxy3 on 15/3/20.
//  Copyright (c) 2015年 C++. All rights reserved.
//



#include <iostream>

using namespace std;

float *finds(float(*point)[4],int n)
{
    float *pt;
    
    pt = *(point+n);
    
    return pt;
    
}

static float score[][4] = {{12,34,56,40},{122,324,562,420},{32,3214,5642,4205}};

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    float *p;
    
    int i,m;
    
    cout<<"Enter Number:";
    
    cin>>m;
    
    /**
     *  sizeof(array) /sizeof(type)---> 数组长度
     *      
     */
#define ArrayMaxIndex sizeof(score)/(sizeof(score[0]))-1 //  数组的最大索引=数组长度-1
    
    if (m>ArrayMaxIndex)
    {
        cout<<"over the row of array";
        
        return NULL;
        
    }
    
    p =finds(score, m);
    
    for (i=0; i<4; i++)
    {
        cout<<" "<<*(p+i);
        
    }
    
    cout<<endl;
    
    return 0;
}

