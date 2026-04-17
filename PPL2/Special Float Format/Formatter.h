#include<string>
using namespace std;

class Formatter
{
    private:
        string input;
    public:
        Formatter(string s);
        string format();
};