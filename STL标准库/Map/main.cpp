//
//  main.cpp
//  Map
//
//  Created by zjsruxxxy3 on 15/4/5.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    
    map<const char *, int> _map;
    
    pair<const char *, int> _pair("ccc",12138);
    
    _map.insert(_pair);
    
    _map.insert(pair<const char *, int>("aaa",10));
    
    _map.insert(pair<const char *, int>("bbb",111));
    
//    cout<<_map["aaa"]<<endl;
//    map<const char*, int>::iterator iter2 = _map.begin();
    
    auto iter = _map.find("ccc");
    
    cout<<iter->second<<endl;
    
    for (auto iter2= _map.begin(); iter2!=_map.end(); iter2++)
    {
        cout<<iter2->first<<":"<<iter2->second<<endl;
        
    }
    
    
//    _map.erase(<#const_iterator __f#>, <#const_iterator __l#>)
    
    // first last
    

    return 0;
}

