#include <iostream>
using namespace std;


int main() {
    
    double d = 3.1415;
    //会做类型， 如果合理 就正确转换， 否则拒绝操作
    int i = static_cast<int>(d);
    cout << i << endl;
    
    void* pc = new long(12345);
    long *pl =  static_cast<long*>(pc);
    cout << *pl << endl;
    
//    double *pd = static_cast<double*>(pl);
    
    //野蛮  你想转就转，但不对结果负责
    double *pd = reinterpret_cast<double*>(pl);
    cout << *pd << endl;
    
    
    
    volatile const int a = 100;
    int* pa = const_cast<int*>(&a);
    *pa = 200;
    cout <<  a << endl;
    
    return 0;
}


