//
//  main.cpp
//  Cpp的可变长数组
//
//  Created by zjsruxxxy3 on 15/3/31.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/**
 *  一维可变长数组
 */

void displayArrayOne()
{
    int len;
    
    cin>>len;
    
    int *p = new int[len];
    
    vector<int> array(len);
    
    for (int i = 0; i<len-1; i++)
    {
        array[i] = i;
        
        cout<<array[i]<<",";
        
    }
    array[len] = len-1;
    cout<<array[len]<<endl;
    
    delete []p;
}

/**
 *  二维可变长数组 1）指针的指针  2）vector模板
 */


void displayArrayTwo(int num1,int num2)
{
//    int num1,num2;
    
//    cout<<"enter the number for row and column:"<<endl;
    
//    cin>>num1>>num2;
    
    int **p = new int *[num1];
    
    for (int i = 0; i<num1; i++)
    {
        p[i] = new int[num2];
    }
    
    for (int i = 0; i<num1; i++)
    {
        for (int j = 0; j<num2; j++)
        {
            p[i][j] = (j+1)*(i+1);
            
            cout<<"-"<<p[i][j]<<":"<<&p[i][j];

        }
        
        cout<<endl;
        
    }
    
    for (int m = 0; m<num1; m++)
        delete [] p[m];
    
    delete [] p;

    
}

void displayArrayTwoB(int m,int n)
{
    vector<vector<int>>veccInt(m,vector<int>(n));
    
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            veccInt[i][j] = (i+1)*(j+1);
        }
    }
    
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<m; j++)
        {
            cout<<veccInt[i][j]<<":"<<&veccInt[i][j]<<endl;
            
        }
        
        cout<<endl;
        
    }
    

    
}

int main(int argc, const char * argv[])
{
//    displayArrayOne();
    
    displayArrayTwo(3,3);
    
    displayArrayTwoB(3, 3);

    return 0;
}



