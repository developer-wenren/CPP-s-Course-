//
//  main.cpp
//  条件编译
//
//  Created by zjsruxxxy3 on 15/3/23.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>

#define IOS

#define USE(x) (x)>=0

int main(int argc, const char * argv[])
{

    // insert code here...
    
#ifdef IOS          // 方式一，根据 宏标示存在性
    std::cout<<"ios"<<std::endl;
#else
    std::cout<<" "<<std::endl;
#endif
    
#if USE(-1)         // 方式二，根据条件的结果0或者1 
    std::cout<<"ios"<<std::endl;
#else
    std::cout<<" "<<std::endl;
#endif
    
    return 0;
}

