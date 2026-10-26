/* 
    Simple Product Inventory System 
        Task: Create a small inventory management program. 
        Requirements: 
        1. Accept details of 5 products.  
        2. Create a structure Product containing:  
            Product ID  
            Product Name  
            Price  
            Quantity  
        3. Store products in an array.  
        4. Create a function to calculate:  
            Total = Price × Quantity 
        5. Display all products with their total value.  
        6. Store product information in products.txt.  
        7. Read the products from the file and display them.  
        Concepts: Array + Function + Structure + File Handling 
*/


#include<iostream>
using namespace std;
int items;

struct product
{
    int id,quantity;
    string name;
    float price;
}cart[5];

int stock_total()
{
    float total;
    for(int i=0;i<items;i++)
    {
        total = cart[i].price * cart[i].quantity;
        cout<<"Total stock price of "<<cart[i].name<<" is:-"<<total<<endl;
    }
}

int main()
{
    cout<<"=========================================="<<endl;
    cout<<"How many product item do you want to add?:-";
    cin>>items;
    cout<<"=========================================="<<endl;
    
    for(int i=0;i<items;i++)
    {
        cout<<"Enter ID of Product "<<i+1<<":-";
        cin>>cart[i].id;

        cout<<"Enter Name of Product "<<i+1<<":-";
        cin>>cart[i].name;

        cout<<"Enter Price of Product "<<i+1<<":-";
        cin>>cart[i].price;

        cout<<"Enter Quantity of Product "<<i+1<<":-";
        cin>>cart[i].quantity;

        cout<<"---------------------------------"<<endl;
    }

    cout<<"    Details of Available Product    "<<endl;
    cout<<"---------------------------------"<<endl;

    for(int i=0;i<items;i++)
    {
        cout<<"Product ID:-       "<<cart[i].id<<endl;
        cout<<"Product Name:-     "<<cart[i].name<<endl;
        cout<<"Product Price:-    "<<cart[i].price<<endl;
        cout<<"Product Quantity:- "<<cart[i].quantity<<endl;
        cout<<"---------------------------------"<<endl;
    }
    stock_total();
    return 0;
}