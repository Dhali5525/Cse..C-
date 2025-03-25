#include<iostream>
////write a program overloading by different number of arguments ( 3 extra codes )
using namespace std;
class Math operations
{
public:
    void calculate (int num1)
{
    cout<<"Square:"<<num*num<<end1;
}
void calculate (int num1, int num2)
{
    cout<<"Product:"<<num1*num2<<end1;
}
void calculate (int num1, int num2. int num3)
{
    cout<<"Sum:"<<num1+num2+num3<<end1;
}
};
int main()
{
    Math operations obj;
    obj. calculate (5);
    obj. calculate (4,3);
    obj. calculate (2,3,4);
    return 0;

}
