//
//  main.cpp
//  图书管理综合
//
//  Created by zjsruxxxy3 on 15/4/2.
//  Copyright (c) 2015年 C++. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int BOOK_MAX = 5;


#pragma mark 图书类
class Book
{

public:
    
    int no;
    
    string name;
    
    
    int b_flag;
    
    int b_del;
    
    Book(){};
    
    void setNo(int n)
    {
        
        no = n;

    };
    
    int getNo();
    
    void setName(string a)
    {
        name = a;
        
    }
    
    
    string getName();
    
    void borBook();
    
    void delBook();
    
    void addBook(int no,string na);
    
};

#pragma mark 读者类
class Reader
{

public:
    
    int no;
    

    string name;
    
    int r_bor;
    
    int r_del;
    
    Book brbook;
    
    void addReader(int id,string name);
    
    void setbrBook(Book book);
    
    Book getbrBook();
    
};

#pragma mark 图书数据库类
class BookDateBase
{
public:

//    Book book
    BookDateBase()
    {
        Book book1;
        
        book1.setNo(1);
        
        book1.setName("wrcj");
        
        Book book2;
        
        book1.setNo(2);
        
        book1.setName("haha");
        
        Book bdarray[10] = {book1,book2};
        

    }
    
    int findbooks(int b_id)
    {
        return 2;
    }
    
    
};

#pragma mark 读者数据库类
class ReaderDateBase
{
    
public:
    Reader btarray2[5];
    

    ReaderDateBase()
    {
        Reader reader1;
        
        reader1.no = 11;
        
        reader1.name = "lili";
        
        Reader reader2;
        
        reader2.no =22;
        
        reader2.name = "gary";
        
        Reader btarray[5] = {reader1,reader2};
        
//        btarray2[5] = &btarray[5];
        
        
    }
    
    
    int findreaders(int r_id)
    {
        return 1;
    }

    
};

#pragma mark 系统主界面
void mianJieMain()
{
    cout<<"|****************************|"<<endl;
    
    cout<<"|         图书管理系统         |"<<endl;
    
    cout<<"                              "<<endl;
    
    cout<<"|  （1）借书              |"<<endl;

    cout<<"                              "<<endl;
    
    cout<<"|  （2）还书              |"<<endl;
    
    cout<<"                              "<<endl;

    cout<<"|  （3）图书管理          |"<<endl;
    
    cout<<"                              "<<endl;
    
    cout<<"|  （4）读者管理          |"<<endl;
    
    cout<<"                              "<<endl;
    
    cout<<"|  （0）退出             |"<<endl;

    cout<<"                              "<<endl;

    cout<<"|****************************|"<<endl;
}


#pragma mark 图书维护菜单
void bookJieMain()
{
    cout<<"|-------------------|"<<endl;
    
    cout<<"|   图书维护         |"<<endl;
    
    cout<<"|  （1）增加         |"<<endl;
    
    cout<<"|  （2）更改         |"<<endl;

    cout<<"|  （3）删除         |"<<endl;

    cout<<"|  （4）查找         |"<<endl;
    
    cout<<"|  （5）显示         |"<<endl;
    
    cout<<"|  （6）返回上一层    |"<<endl;
    
    cout<<"|-------------------|"<<endl;
  
}

#pragma mark 读者维护菜单
void readerJieMain()
{
    cout<<"|-------------------|"<<endl;
    
    cout<<"|   读者维护         |"<<endl;
    
    cout<<"|  （1）增加         |"<<endl;
    
    cout<<"|  （2）更改         |"<<endl;
    
    cout<<"|  （3）删除         |"<<endl;
    
    cout<<"|  （4）查找         |"<<endl;
    
    cout<<"|  （5）显示         |"<<endl;
    
    cout<<"|  （6）返回上一层    |"<<endl;
    
    cout<<"|-------------------|"<<endl;

}

void borrowtoReturn(char br)
{
    int rdid;
    
    int bkid;
    
    int rsuffix,bsuffix;
    
    BookDateBase t_bd;
    
    ReaderDateBase t_rd;
    
    if ('1' == br)
    {
        rsuffix = t_rd.findreaders(rdid);
        
        bsuffix = t_bd.findbooks(bkid);
        
        if ((rsuffix = -1 || bsuffix == -1)) return;
        
        if (t_bd.btarray[bsuffix].b_flag == 2)
        {
            
            cout<<"图书已被借出，亲选择其他图书"<<endl;
            
            return;
            
        }
        
//        if (t_rd.rdarray[rsuffix].r_bor == 1)
        {
            
            cout<< "你已经借过图书，请先归还再借其他图书"<<endl;

            return;
            
        }
        
//        t_bd.btarray[bsuffix].b_flag = 2;
        
//        t_rd.rdarray[rsuffix].r_bor = 1;
        
//        t_rd.rdarray[rsuffix].brbook = t_bd.btarray[bsuffix];
        
        return;
        
    }
    
    if ('2' == br)
    {
        
    }
}

void bookMange()
{

    bookJieMain();

}

void readerMange()
{

    readerJieMain();

}

int main(int argc, const char * argv[])
{
//    bookJieMain();
//    readerJieMain();
//    mianJieMain();

    char in;
    
    do
    {
        mianJieMain();
        
        cin>>in;
        
        switch (in)
        {
            case '1':
                borrowtoReturn(in);
                break;
            case '2':
                borrowtoReturn(in);
                break;
            case '3':
                bookMange();
                break;
            case '4':
                readerMange();
                break;
            case '0':
                break;
                
            default:
                
                cout<<"输入错误，请重新输入."<<endl;
                
                break;
        }
        
    } while (in != '0');

    return 0;
}

