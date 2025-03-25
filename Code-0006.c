#include<iostream>
using namespace std;
////Find maximum Number
class Maxfinder
{
public:
    int max(int a, intv)
    {
        return (a>b)?a:b;
    }
    int max(int a,int b,int c)
    {
        return (a>b)?((a>c)?a:c):((b>c)?b:c);
    }
};
int main ()
{
Max Finder obj;
cout <<"Max of 10 and 20:"<<obj.max(10,20)<<end1;
cout<<"Max of 5,15, and 10:"<<obj.max(5,15,10)<<end1;
return 0;
}
