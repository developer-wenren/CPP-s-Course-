#include <iostream>
using namespace std;

/*运算符重载*/

class F {
    int n;
    int d;
public:
    F(int n, int d) : n(n), d(d){}
    //声明 该全局函数 是 本类的友元函数
    friend ostream& operator<<(ostream &o, F f);
    //友元函数即使 声明和定义都写在类里，但是依然是全局函数
    friend F operator+(F f, F f2) {
        //返回了一个  匿名对象
        return F(f.n * f2.d + f2.n * f.d, f.d * f2.d);
    }
    //成员函数方式
    F operator-(F f) {
        return F(this->n * f.d - f.n * this->d, this->d * f.d);
    }
};

ostream& operator<<(ostream &o, F f) {
    o << f.n << '/' << f.d;
    return o;
}



int main() {
    cout << 123 << 345 << endl;

    
    const F f(2, 3);
    cout << f << ' ' << 123 << endl;
    //查找有没有 一个成员函数可以满足
//    cout.operator<<(f);
    //查找有没有 一个全局函数可以满足
//    operator<<(cout, f);
    
    F f2(4, 5);
    F f3 = f + f2;
//    f.operator+(f2);
//    operator+(f, f2);
    cout << f3 << endl;
    
    F f4 = f3 - f2;
//    f3.operator-(f2);
    cout << f4 << endl;

    return 0;
}



