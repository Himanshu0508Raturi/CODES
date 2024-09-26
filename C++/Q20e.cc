#include <iostream>
using namespace std;

class Product
{
protected:
    int productId;
    float price;

public:
    Product(int Pid, float price) : productId(Pid), price(price) {}
    void show_price()
    {
        cout << "Product ID is: " << productId << endl;
        cout << "Price  is:$ " << price << endl;
    }
};
class electronics : virtual public Product
{
protected:
    int warranty;

public:
    electronics(int id, float pr, int war) : Product(id, pr), warranty(war) {}

    void display_elec_info()
    {
        show_price();
        cout << "Warranty is : " << warranty << " Months" << endl;
    }
};
class clothing : virtual public Product
{
protected:
    string size;
    string fabricType;

public:
    clothing(int id, float pr, string s, string fabric) : Product(id, pr), size(s), fabricType(fabric) {}

    void display_cloth_info()
    {
        show_price();
        cout << "Size is : " << size << endl;
        cout << "Fabric  is : " << fabricType << endl;
    }
};
class discountPrice : virtual public electronics, virtual public clothing
{
private:
    float discount;

public:
    discountPrice(int id, float pr, int war, string sz, string fbric, int ds) : Product(id, pr), electronics(id, pr, war), clothing(id, pr, sz, fbric), discount(ds) {}
    void show_final()
    {
        show_price();
        cout << "Warrenty : " << warranty << " months" << endl;
        cout << "Size : " << size << endl;
        cout << "Fabric  is : " << fabricType << endl;
        float dis_price = price - (discount / 100) * price;
        cout << "Prize is: " << price << endl;
        cout << "Discounted Prize is: " << dis_price << endl;
    }
};
int main()
{
    discountPrice dp(101, 1500, 24, "L", "Cotton", 10);
    dp.show_final();
    cout << endl;
    discountPrice dp2(102, 4555, 15, "s", "Linen", 20);
    dp2.show_final();
    cout << endl;
    electronics el(1000, 3000, 24);
    el.display_elec_info();
    cout << endl;
    clothing cl(20001, 5000, "M", "Jute");
    cl.display_cloth_info();
    return 0;
}