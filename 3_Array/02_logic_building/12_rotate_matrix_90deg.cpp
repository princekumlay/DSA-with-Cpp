//we have to rotate the matrix by 90degree in clockwise direction
#include<bits/stdc++.h>
using namespace std;

class RotateMatrix{
    public:
        void printMatrix(vector<vector<int>> matrix){
            int n = matrix.size();

            for(int i = 0; i < n; i++){

                for(int j = 0; j < n; j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;

            }
        }

        void bruteForceRotate(vector<vector<int>>& matrix){
            int n = matrix.size();

            vector<vector<int>> ans(n, vector<int>(n));

            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    ans[j][n - i - 1] = matrix[i][j];
                }
            }

            //print rotated matrix
            cout<<"Matrix rotated 90 degree by brute force: "<<endl;
            printMatrix(ans);

        }


        void optimizedRotate(vector<vector<int>>& matrix){
            int n = matrix.size();

            //first we have to find the transpose of a matrix
            for(int i = 0; i < n - 1; i++){
                
                for(int j = i + 1; j < n; j++){
                    
                    swap(matrix[i][j], matrix[j][i]);
                }

            }

            //reverse every row of the matrix
            for(int i = 0; i < n; i++){

                reverse(matrix[i].begin(), matrix[i].end());

            }

            //print rotated matrix
            cout<<"Optimized rotated matrix using transpose: "<<endl;
            printMatrix(matrix);

        }
};

int main(){
    RotateMatrix obj;
    int n;
    cout<<"Enter size for (NxN) matrix: ";
    cin>>n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout<<"Enter matrix elements: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>matrix[i][j];
        }
    }

    //rotate matrix by brute force
    // obj.bruteForceRotate(matrix);
    
    //rotate matrix by optimized approach
    obj.optimizedRotate(matrix);

    return 0;
}