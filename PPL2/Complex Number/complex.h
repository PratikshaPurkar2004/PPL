class Complex
{
    private:
      double real,imag;
    public:
        Complex();
        Complex(double r,double i);
        Complex(const Complex& c);
        ~Complex();
        void input();
        void display();
        Complex addition(Complex c);
        Complex subtraction(Complex c);
};