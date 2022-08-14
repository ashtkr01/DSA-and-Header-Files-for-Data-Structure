#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    int id;
    char name[100];
    int mrp;
    int sellingPrice;

public:
    // Default Constructor looks like :
    Product()
    {
    }
    // User -defined Constructor
    Product(int id, char *n, int mrp, int sellingPrice)
    { /*
          this->id  "is same as" (*this).id
          */
        this->id = id;
        strcpy(name, n);
        this->mrp = mrp;
        this->sellingPrice = sellingPrice;
    }
    // Setter
    void setMrp(int price)
    {
        if (price > 0)
        {
            mrp = price;
        }
    }
    void setSellingPrice(int price)
    {
        // Additional Checks:
        if (price > mrp)
        {
            sellingPrice = mrp;
        }
        else
        {
            sellingPrice = price;
        }
    }
    // Getter
    int getMrp()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return sellingPrice;
    }
   void showDetail()
   {
       cout<<"Name :"<<name<<endl;
       cout<<"Id : "<<id<<endl;
       cout<<"M.R.P :"<<mrp<<endl;
       cout<<"Selling Price :"<<sellingPrice<<endl;
   }
};

int main()
{
    Product camera(112, "Sony", 26000, 25000);

    // camera.setMrp(100);
    // camera.setSellingPrice(900);

    cout << "Company :" << camera.showDetail() << endl;
    cout << "M.R.P :" << camera.getMrp() << endl;
    cout << "Selling Price " << camera.getSellingPrice() << endl;
    return 0;
}
