//METHOD OVERRIDING
/*
SO RULES: same name[in both classes ] , same argument , only possible through inheritance
*/
#include<iostream>
using namespace std;
class animal
{
    public:
    string speaking;
    void speaking()
    {
        cout<<"hi i speak"<<endl;

    }

};
class dog : public animal
{
public:
    string bark;
    void speaking()
    {
        cout<<"i am dog so i bark"<<endl;
    }
};

int main()
{
    dog d;
    d.speaking();
    animal a;
    a.speaking();
}
