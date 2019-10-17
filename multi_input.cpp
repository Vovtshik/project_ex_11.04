#include "../std_lib_facilities.h"

void convert_to_decimal(string& s, vector<int>& vi);

int main()
{
    cout << "Enter several octal, decimal, \n"
        << "and hexadecimal integers in any combination \n"
        << "using the suffixes 0 and 0x:\n";
    string str_num;
    cin >> str_num;
    vector<int> nums;

    return 0;
}

void convert_to_decimal(string& s, vector<int>& vi)
{
    istringstream is(s);
    is.unsetf(ios::dec);
    is.unsetf(ios::oct);
    is.unsetf(ios::hex);
    for(int temp; is >> temp;)
    {
        vi.push_back(temp);
    }
}