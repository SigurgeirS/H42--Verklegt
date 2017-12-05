#ifndef FIND_LINE_H
#define FIND_LINE_H
#include <vector>
#include<string>
#include "../Domain/Admin_domain.h"
using namespace std;
class Find_line
{

    public:
        Find_line();
        bool find_ID(string line,int id_input);
//        Admin_domain get_admin_domain();
        string retrieveItem(string filename, string id);
        vector<string> retrive_all_items(string file);
        virtual ~Find_line();

    protected:

    private:
};

#endif // FIND_LINE_H
