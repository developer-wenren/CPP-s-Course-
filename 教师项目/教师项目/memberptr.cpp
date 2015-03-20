#include <iostream>
using namespace std;

class Date{
public:
    Date (int y, int m, int d) : year(y), month(m), day(d){
    }
    int year;
    int month;
    int day;
    void show() {
        cout << year << '-' << month << '-' << day << endl;
    }
};


void print(Date *pd, int n, int Date::*p) {
    for (int i = 0; i < n; i++) {
        cout << pd[i].*p << ' ';
    }
    cout << endl;
}


int main() {
    cout << sizeof(Date) << endl;
    //取成员变量地址  &类名::变量名
    int Date::*pdy = &Date::year;
    int Date::*pdm = &Date::month;
    int Date::*pdd = &Date::day;
    
    cout << pdy << endl;
    cout << pdm << endl;
    cout << pdd << endl;
    printf("pdy = %p\n", pdy);
    printf("pdm = %p\n", pdm);
    printf("pdd = %p\n", pdd);
    
    
    Date d(100, 10, 30);
    cout << d.year << endl;
    cout << d.*pdy << endl;
    
    
    Date d1(2015, 3, 19);
    Date d2(2016, 4, 20);
    Date d3(2017, 5, 21);
    Date ds[] = {d1, d2, d3};
    print(ds, 3, &Date::day);

    
    return 0;
}




