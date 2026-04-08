class Customer
{
    private:
        int no;
        char name[20];
        int qty;
        double price,totalPrice,discount,netPrice;
    public:
        Customer();
        void input();
        void calDiscount();
        void show();
};