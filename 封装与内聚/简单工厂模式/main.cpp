//
//  main.cpp
//  简单工厂模式
//
//  Created by zjsruxxxy3 on 15/4/4.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

using namespace std;

class Operation
{
    int a;
    int b;
    
    virtual int doOperation(int a,int b) = 0;
    
public:
    
    int getResult(int x,int y)
    {
        return doOperation(x,y);
    }
};

class OperationAdd:public Operation
{
    int doOperation(int a,int b)
    {
        return a+b;
    }
};

class OperationSub:public Operation
{
    int doOperation(int a,int b)
    {
        return a-b;
    }
};


class OperationMul:public Operation
{
    int doOperation(int a,int b)
    {
        return a*b;
    }
};

class OperationFactory
{
    char ch;
public:
    static::Operation* createOperation(char ch)
    {
        Operation *op = nullptr;
        
        switch (ch)
        {
            case '+':
                op = new OperationAdd;
                break;
            case '-':
                op = new OperationSub;
            case '*':
                op = new OperationMul;

                
            default:
                break;
        }
        
        return op;
    }
    
};

int main(int argc, const char * argv[])
{
    int a,b;
    char ch;
    
    cout<<"input 1st Num:"<<endl;
    
    cin>>a;
    
    cout<<"intput 2rd Num:"<<endl;
    
    cin>>b;
    
    cout<<"intput operation:"<<endl;
    
    cin>>ch;
    
    Operation *op = OperationFactory::createOperation(ch);
                                        // 简单工厂 创建operation对象
    
    int result = op->getResult(a,b);
    
    cout<<result<<endl;
    
    

    

    return 0;
}

