#include <iostream>

using namespace std;

class Vehicle {
    public:
    string make,model,engine_number;
    double price=0.0, profit_pc = 0.15, profit=0.0;

    void set_vehicle(){
        cout<<"\nVehicle Details entry. ";
        cout<<"\nEnter vehicle make : ";
        cin>>make;
        cout<<"\nEnter vehicle model : ";
        cin>>model;
        cout<<"\nEnter vehicle price : ";
        cin>>price;
        cout<<"\n\n";
    }

    void get_profit(){
        profit = price*profit_pc;
        cout<<"\n:: Vehicle Details ::";
        cout<<"\nVehicle Make \t: "<<make;
        cout<<"\nVehicle Model \t: "<<model;
        cout<<"\nVehicle Price \t: "<<price;
        cout<<"\nVehicle Profit \t: "<<profit;
        cout<<"\n";
    }
};

int main()
{
    cout << "\n\n";
    cout << "\n\nDT DOBIE Sales(K) Ltd Sales System " << endl;
    cout << "\n";

    // Get Vehicle details
    Vehicle vh;
    vh.set_vehicle();

    // Get vehicle sales profit
    vh.get_profit();

    return 0;
}
