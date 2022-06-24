//Name - Anirban Banerjee Reg No - 21BPS1061

/*Let us assume that VIT Student is appointed as the Data Analyst
in a stock exchange.
Write a CPP program to predict the stocks for this week based
on the previous week rates for the following companies with
static data members and static member functions along with
other class members.
Predicted stock price for TCS : 10% increase from previous
week + 1% overall increase for this week
Predicted stock price for WIPRO: 20% increase from previous
week + 1% overall increase for this week
Predicted stock price for ROLEX : 12% decrease from previous
week + 1% overall increase for this week
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class stock
{
    public:
    static double tcs;
    static double wipro;
    static double rolex;
    double tcs_price,wipro_price,rolex_price;
    public:
    void get_value()
    {
        cout<<"Enter previous week TCS stock price "<<"\n";
        cin>>tcs;
        cout<<"Enter previous week Wipro stock price"<<"\n";
        cin>>wipro;
        cout<<"Enter previous week Rolex stock price"<<"\n";
        cin>>rolex;
    }
    void cal()
    {
        tcs_price=1.1*tcs;
        tcs_price=1.01*tcs_price;
        cout<<"Predicted TCS stock price = "<<tcs_price<<"\n";
        wipro_price=1.2*wipro;
        wipro_price=1.01*wipro_price;
        cout<<"Predicted Wipro stock price = "<<wipro_price<<"\n";
        rolex_price=0.88*rolex;
        rolex_price=1.01*rolex_price;
        cout<<"Predicted Rolex stock price = "<<rolex_price<<"\n";
    }
};
double stock :: tcs=0;
double stock :: wipro=0;
double stock :: rolex=0;

int main()
{
    stock obj;
    obj.get_value();
    obj.cal();
    return 0;
}
