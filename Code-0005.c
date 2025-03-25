#include<iostrem>
#include<cmath>
////calculate the power of a number
using namespace std;
class power
{
    Public:
        void calculate (int num)
{
    cout <<"Square of "<<num<<"is:"<<Pow(num,2)<<end1;
}
void calculate (int num, int exp)
{
    cout <<num<<"raised to " <<exp<<"is:"<<pow(num,exp)<<end1;

}
};
int main ()
{
    power obj;
    obj.Calculate (5);
    obj.Calculate (2,3);
    return 0;
}
