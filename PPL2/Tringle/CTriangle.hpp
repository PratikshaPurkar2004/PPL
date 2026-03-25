class CTriangle{
    private:
        double a,b,c;
    public:
        void input();
        void CalculateArea(); 
        bool isValid();
        void checkSides();
        void checkAngles();
        void smallestSide();
        void largestSide();
        void display(); 
};