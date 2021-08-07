#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s = "+" + s + "+";
    vector<int> vi;
    vector<int> mainvi;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            vi.push_back(i);
        }
    }
    for (int i = 0; i < vi.size() - 1; i++)
    {
        mainvi.push_back(0);
        for (int j = vi[i] + 1; j < vi[i + 1]; j++)
        {
            mainvi[i] = mainvi[i] * 10 + (s[j]-'0');
        }
    }
    sort(mainvi.begin(), mainvi.end());
    for (int i = 0; i < mainvi.size() - 1; i++)
    {
        cout << mainvi[i] << "+";
    }
    cout << mainvi[mainvi.size() - 1] << endl;
}