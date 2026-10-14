//we have to print the complete pascal's triangle for the given number
#include<bits/stdc++.h>
using namespace std;

class PascalTriangle{
    private:
        
        void printPascalTriangle(vector<vector<int>>& result){

            for(const auto& ele: result){
                
                cout<<"[ ";
                for(const auto& element: ele){
                    cout<<element<<" ";
                }
                cout<<"] "<<endl;

            }
        }

        vector<int> pascalRow(int r){
            int ans = 1;
            vector<int> temp;
            temp.push_back(ans);

            for(int i = 1; i < r; i++){

                ans *= r - i;
                ans /= i;

                temp.push_back(ans);
            }

            return temp;
        }

    public:

        void pascalTriangle(int n){

            vector<vector<int>> result;

            for(int i = 1; i <= n; i++){

                result.push_back(pascalRow(i));

            }

            //print pascal triangle list
            cout<<"Pascal triangle 2D list: "<<endl;
            printPascalTriangle(result);

        }
};

int main(){
    PascalTriangle obj;
    int n;
    cout<<"Enter value of n:";
    cin>>n;

    obj.pascalTriangle(n);

    return 0;
}
