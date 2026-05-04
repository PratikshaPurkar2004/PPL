
class Angle {
private:
    double A, B, C; 
    double a, b, c; 

public:
    Angle(double angleA, double angleB, double sidea);
    bool isValid();
    void compute();
    void display();
};

