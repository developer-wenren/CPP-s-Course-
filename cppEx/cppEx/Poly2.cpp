#include<iostream>
using namespace std;

//一个类中如果有纯虚函数，那么这个类就是抽象类， 抽象类不能创建对象
class Sell_Protocol{
public:
    //纯虚函数
    virtual void sell() = 0;
};
//如果子类不重写父类的 纯虚函数  那么子类也是抽象类
class Arms : public Sell_Protocol{
public:
    void sell() {
        cout << "出售武器获得100金" << endl;
    }
};
class Equip : public Sell_Protocol{
public:
    void sell() {
        cout << "出售衣服获得50金" << endl;
    }

};
class Goods : public Sell_Protocol{
    void sell() {
        cout << "出售物品获得30金" << endl;
    }
};

class NPC{
public:
    void buy(Sell_Protocol *sell) {
        sell->sell();
    }
};

int main() {
    Arms *arms = new Arms;
    Equip *equip = new Equip;
    Goods *goods = new Goods;
    
    NPC *npc = new NPC;
    npc->buy(goods);
    

    return 0;
}





