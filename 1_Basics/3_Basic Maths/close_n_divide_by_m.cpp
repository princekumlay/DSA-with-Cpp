//Two integers n and m (m != 0). The problem is to find the number closest to n and divisible by m. If there is more than one such number, then output the one having the maximum absolute value.
/*
Input: n = 13, m = 4
Output: 12
Explanation: 12 is the Closest Number to 13 which is divisible by 4.

Input: n = -15, m = 6
Output: -18
Explanation: Both -12 and -18 are closest to -15 and divisible by 6, but -18 has the maximum absolute value. So, output is -18.
*/

#include<bits/stdc++.h>
using namespace std;

class Closest {
    public:
        int closest(int n, int m){
            int q = n / m; //closest divisor

            //first num
            int n1 = m * q;
            //second num
            int n2 = (n * m > 0) ? (m * (q + 1)) : (m * (q - 1));

            //compare
            if(abs(n - n1) < abs(n - n2)) return n1;
            if(abs(n - n1) > abs(n - n2)) return n2;

            //if equidistant
            return (abs(n1) > abs(n2)) ? n1 : n2;
        }
};

int main(){
    Closest obj;
    int n, m;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter divisor: ";
    cin>>m;
    cout<<"Closest divisible number to "<<n<<" by "<<m<<" is: "<<obj.closest(n, m)<<endl;
    return 0;
}