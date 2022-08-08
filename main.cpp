#include<iostream>
using namespace std;
class vehicle{
  public:
    int speed;
    vehicle()
    {
        cout<<"vehicle initialised"<<endl;
    }
    vehicle(int s)
    {
        this->speed = s;
        cout<<"Vehicle initialised with speed = "<<s<<endl;
    }
    ~vehicle()
    {
        cout<<"Vehicle Destroyed"<<endl;
    }
};
int main()
{
    vehicle v1(5);

return 0;
}
