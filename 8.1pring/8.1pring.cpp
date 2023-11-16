#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
    int k = 0;
    for (int i = 0; s[i] != 0; i++)
        if (s[i] == ',') {
            k++;
            if (k == 3) {
                return i;
            }
        }
    return 0;
}


string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != -1)
        if (s[pos + 1])
            s.replace(pos, 1, "**");
        else
            pos++;
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;

    getline(cin, str);
    cout << "Index of third comma is " << Count(str) << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}
