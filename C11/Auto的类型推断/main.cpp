//
//  main.cpp
//  Auto的类型推断
//
//  Created by 软件开发 on 15/3/26.
//  Copyright (c) 2015年 软件开发. All rights reserved.
//

#include <iostream>

#include <vector>

using namespace std;

class sorite {
    
    
public:
    void show(){
        
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...

    
    auto *p = new sorite;
    
    p->show();
    
    vector<int> v;
    
    v.push_back(100);
    
    
    return 0;
}
