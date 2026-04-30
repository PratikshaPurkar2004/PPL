class DecimalToOctal
{
    private:
        int decimal, octal = 0, place = 1, remainder;
    public:
        DecimalToOctal(int n);
        void input();
        void solve();
};