#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "Design Engineering", "AI", "ML", "Data", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
        cout << endl;
}