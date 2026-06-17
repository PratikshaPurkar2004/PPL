class Matrix
{
    private:
    int rows,cols;
    int mat[100][100];
    public:
        void input();
        void display();
        bool isToeplitz();
};