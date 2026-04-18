#include<string>

class BaseConvertor
{
    private:
        int number,base;
    public:
        BaseConvertor(int n,int b);
        std::string convert();
};