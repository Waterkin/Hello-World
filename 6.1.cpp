#include <iostream>
using namespace std;
class Book{
    char bookname[100];
    double price;
    int number;
public:
    void display();
    void borrow();
    void restore();
    void set();
    
};
void Book::set(){
    cin>>this->bookname>>this->price>>this->number;//设置书籍
}

void Book::display(){
    cout<<this->bookname<<' '<<this->price<<' '<<this->number<<endl;//显示图书情况
}
void Book::borrow(){
    cout<<(--this->number)<<endl;//借书
}
void Book::restore(){
    cout<<(++this->number)<<endl;//还书
}
int main()
{
    Book RomeoAndJuliet;
    RomeoAndJuliet.set();
    RomeoAndJuliet.display();
    RomeoAndJuliet.borrow();
    RomeoAndJuliet.restore();
    //测试函数功能 BY 汪灵浩
}
