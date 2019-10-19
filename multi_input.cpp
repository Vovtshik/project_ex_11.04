#include "../std_lib_facilities.h"

void convert_to_decimal(string& s);

int main()
{
    cout << "Enter several octal, decimal, \n"
        << "and hexadecimal integers in any combination \n"
        << "using the suffixes 0 and 0x:\n";
    string str_num;
    cin >> str_num;
    convert_to_decimal(str_num);

    return 0;
}

void convert_to_decimal(string& s)
{
    istringstream is(s);
    for(string str; is >> str;)
    {
        istringstream ist(str);
        char ch_t;
        ist >> ch_t;
        if(ch_t == '0')
        {
            ist >> ch_t;
            if(ch_t == 'x')
                {
                    string str_t;
                    ist >> str_t;
                    str_t = "0x" + str_t;
                    istringstream ist(str_t);
                    //istringstream ist(str_t);
                    int temp;
                    ist >> temp;
                    cout << showbase << hex << temp << " (hexadecimal)  turns into decimal " 
                    << dec << temp << noshowbase << '\n';
                }
            else
                {
                    ist.unget();
                    int temp;
                    ist >> temp;
                    cout << showbase << oct << temp << "(octal) turns into decimal" 
                    << dec << temp << noshowbase << '\n';
                }
        }
        else
        {
            ist.unget();
            int temp;
            ist >> temp;
            cout << temp << "(decimal) turns into decimal" << temp << '\n';
        }
    }
}