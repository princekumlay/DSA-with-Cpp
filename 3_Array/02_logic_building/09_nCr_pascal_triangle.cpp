// we have to print the element at rth row and cth column in the pascal's triangle
#include <bits/stdc++.h>
using namespace std;

class PascalEle
{
public:
    void ele(int r, int c)
    {

        long long res = 1;

        // ele at rth row and cth column
        for (int i = 0; i < c - 1; i++)
        {
           
            res = res * (r - i - 1);
            res = res / (i + 1);
        }

        cout << "Element at rth row and cth column is: " << res << endl;
    }
};

int main()
{
    PascalEle obj;
    int r, c;
    cout << "Enter row and column: ";
    cin >> r >> c;
    obj.ele(r, c);

    return 0;
}