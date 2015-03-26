//
//  main.cpp
//  Function&Bind
//
//  Created by 软件开发 on 15/3/26.
//  Copyright (c) 2015年 软件开发. All rights reserved.
//

#include <iostream>

using namespace std;

void g_func(int a)
{
    cout<<"g_func"<<a<<endl;
}

class A{

public:
    static void SHOW()
    {
        cout<<"---"<<   endl;
    }
    
     void SHOW2()
    {
        cout<<"+++++"<< endl;
    }
    
    void SHOW3(int a,int b,int c ,int d)
    {
        cout<<"++++"<<   endl;
    }
};

typedef function<void()>(FUNC);

typedef function<void(int)>(FUNC2);

typedef function<void(int,int)>(FUNC3);


int main(int argc, const char * argv[]) {
    // insert code here...
    
//    function<void()>func = function<void()>(g_func);
    
//    FUNC fu = FUNC(g_func);
//    fu();
    
//    FUNC2 fu3 = FUNC2(g_func);
//    fu3(10);
//    
//    
//    FUNC fu2 = FUNC(A::SHOW);
//    
//    fu2();
    
    A a;
    
    FUNC func4 = std::bind(&A::SHOW2, &a);
    
    func4();
    
    FUNC3 func5 = std::bind(&A::SHOW3,&a,300,200,100,10);
    
     func5;
    
    
    return 0;
}
