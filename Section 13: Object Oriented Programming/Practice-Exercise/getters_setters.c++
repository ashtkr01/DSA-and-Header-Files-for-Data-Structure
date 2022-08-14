#include<bits/stdc++.h>
using namespace std;

class Product
{
    private:
       int id;
       char name[100];
       int mrp;
       int sellingPrice;
    public:
        //Setter
        void setMrp(int price)
        {
            if(price>0)
            {
            mrp=price;
            }
        }
        void setSellingPrice(int price)
        {
            //Additional Checks:
            if(price > mrp)
            {
                sellingPrice=mrp;
            }
            else 
            {
            sellingPrice=price;
            }
        }  
        //Getter 
        int getMrp()
        {
            return mrp;
        } 
        int getSellingPrice()
        {
            return sellingPrice;
        }
};

int main(int argc, char const *argv[])
{
    Product camera;

    camera.setMrp(100);
    camera.setSellingPrice(900);

    cout<<"M.R.P :"<<camera.getMrp()<<endl;
    cout<<"Selling Price "<<camera.getSellingPrice()<<endl;
    return 0;
}
