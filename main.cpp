#include <iostream>
#include <string>
using namespace std;
union productinfo
    {
        int warrantyperiod;
        char expirydate[20];
    };
    int main()
    {
        int choice;
        productinfo p;
        cout<<"enter product type:";
        cout<<"1.electronic product:";
        cout<<"2.grocery product:";
        cout<<"enter your choice:";
        cin>>choice;
        if(choice==1)
        {
            cout<<"enter warranty period in months:";
            cin>>p.warrantyperiod;
            cout<<"product type: electronic product";
            cout<<"warranty period:"<<p.warrantyperiod <<"months";
        }
        else
        {
            if(choice ==2)
            {
                cout<<"enter the expiry date (dd/mm/yyyy):";
                cin>>p.expirydate;
                cout<<"product type:grocery product";
                cout<<"Expiry Date:"<<p.expirydate<<"date";
            }
            else
                {
                    cout<<"invalid choice";
                    }
        }
        return 0;
    }

