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
    // char ch_t;
    // is >> ch_t;
    for(char ch_t; is >> ch_t;)
    {
        if(ch_t == '0')
        {
            is >> ch_t;
            if(ch_t == 'x')
                {
                    string temp;
                    is >> temp;
                    temp = "0x" + temp;
                    cout << showbase << hex << temp << "(hexadecimal)  turns into decimal " 
                    << dec << temp << noshowbase << '\n';
                }
            else
                {
                    is.unget();
                    string temp;
                    temp = '0' + temp;
                    cout << showbase << oct << temp << "(octal) turns into decimal" 
                    << oct << temp << noshowbase << '\n';
                }
        }
    else
    {
        is.unget();
        string temp;
        cout << temp << "(decimal) turns into decimal" << temp << noshowbase << '\n';
    }
    }
    
    // is.unsetf(ios::dec);
    // is.unsetf(ios::oct);
    // is.unsetf(ios::hex);
    // for(int temp; is >> temp;)
    // {
    //     vi.push_back(temp);
    // }

}