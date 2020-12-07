#include <iostream>

using namespace std;

class B
{
    public:
    B()
    {
        cout<<"default constructor"<<endl;
    }
    ~B()
    {
        cout<<"desturcted"<<endl;
    }
    B(int i) : data(i)
    {
        cout << "constructed by parameter" <<endl;
    }
    private:
    int data;
};

B play(B b)
{
    return b;
}


int main()
{

    play(5);
    return 0;
}
