#ifndef FIND_LINE_H
#define FIND_LINE_H
#include <string>
using namespace std;
class Find_line
{
    public:
        Find_line();
        bool find_ID(string line,int id_input);
        string retrieveItem(string filename, int id);
        virtual ~Find_line();

    protected:

    private:
};

#endif // FIND_LINE_H
