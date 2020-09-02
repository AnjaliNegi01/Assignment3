#include<iostream>
using namespace std;

class Invoice{
public:
    Invoice(string a,string b, int x,int y)
    {
        partNumber=a;
        partDesp=b;
        quantity=x;
        price=y;
    }
    void setPartNumber(string a)
    {
        partNumber=a;
    }
    string getPartNumber()
    {
        return partNumber;
    }
    //******************
    void setPartDesp(string b)
    {
        partDesp=b;
    }
    string getPartDesp()
    {
        return partDesp;
    }
    //*****************
    void setQuantity(int x)
    {
        quantity=x;
    }
    int getQuantity()
    {
        return quantity;
    }
    //*******************
    void setPrice(int y)
    {
        price=y;
    }
    int getPrice()
    {
        return price;
    }
    //******************
    int getInvoiceAmount(int quantity,int price)
    {
        int amount;
        amount=quantity*price;
        return amount;
    }

private:
    string partNumber;
    string partDesp;
    int quantity;
    int price;
    };


int main()
{
    Invoice iv1 ("121","Defective",2,100);
    Invoice iv2 ("101","Good",5,50);
    cout<<"Part Number is "<<iv1.getPartNumber()<<"\nPart Description is "<<iv1.getPartDesp()<<"\nQuantity of items purchased are "<<iv1.getQuantity()<<"\nPrice of each item is "<<iv1.getPrice()<<endl;
    cout<<"Total Amount is "<<iv1.getInvoiceAmount(2,100)<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Part Number is "<<iv2.getPartNumber()<<"\nPart Description is "<<iv2.getPartDesp()<<"\nQuantity of items purchased are "<<iv2.getQuantity()<<"\nPrice of each item is "<<iv2.getPrice()<<endl;
    cout<<"Total Amount is "<<iv2.getInvoiceAmount(5,50)<<endl;
}
