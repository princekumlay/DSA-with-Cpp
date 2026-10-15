//we have to set all the rows and columns to zero correspond to the zero in the matrix
//1-> Brute force approach: it takes O(n^3) time and O(1) space
//1-> Better approach: it takes O(n^2) time and O(n + m) space
//1-> Optimal approach: it takes O(n^2) time and O(1) space
#include<bits/stdc++.h>
using namespace std;

class SetZeros{
    private:
        //print function for matrix
        void printMatrix(vector<vector<int>>& matrix){
            int r = matrix.size(), c = matrix[0].size();

            for(int i = 0; i < r; i++){

                for(int j = 0; j < c; j++){

                    cout<<matrix[i][j]<<" ";

                }
                cout<<endl;
            }
        }

        //mark particular row to -1
        void markRow(vector<vector<int>>& matrix, int i){
            int c = matrix[0].size();

            //mark row to -1
            for(int j = 0; j < c; j++){
                matrix[i][j] = -1;
            }

        }

        //mark particular column to -1
        void markColumn(vector<vector<int>>& matrix, int j){
            int r = matrix.size();

            //mark column to -1
            for(int i = 0; i < r; i++){
                matrix[i][j] = -1;
            }

        }

    public:
        //brute force approach to set matrix to zeros
        void bruteForce(vector<vector<int>>& matrix){
            int r = matrix.size(), c = matrix[0].size();

            //mark rows and columns to -1
            for(int i = 0; i < r; i++){

                for(int j = 0; j < c; j++){

                    if(matrix[i][j] == 0){

                        markRow(matrix, i);
                        markColumn(matrix, j);

                    }
                }
            }

            //set rows and columns to zero
            for(int i = 0; i < r; i++){

                for(int j = 0; j < c; j++){

                    if(matrix[i][j] == -1){
                        matrix[i][j] = 0;
                    }
                }
            }

            //print matrix
            cout<<"Zeros are set by brute force method: "<<endl;
            printMatrix(matrix);

        }

        //betterApproach to set matrix to zeros
        void betterApproach(vector<vector<int>>& matrix){
            int r = matrix.size(), c = matrix[0].size();

            vector<int> row(r, 0), col(c, 0);

            //mark rows and columns that contains zero
            for(int i = 0; i < r; i++){

                for(int j = 0; j < c; j++){

                    if(matrix[i][j] == 0){
                        row[i] = 1;
                        col[i] = 1;
                    }
                }
            }

            //set rows and columns to zeros which ar marked
            for(int i = 0; i < r; i++){

                for(int j = 0; j < c; j++){

                    if(row[i] == 1 || col[j] == 1){
                        matrix[i][j] = 0;
                    }
                }
            }

            //print matrix
            cout<<"Zeros are set by better approach: "<<endl;
            printMatrix(matrix);

        }


        //optimized approach to set matrix to zero
        void optimalApproach(vector<vector<int>>& matrix){
            int r = matrix.size(), c = matrix[0].size();

            // int row[r] -> matrix[...][0] => fix col and traverse for row
            // int col[c] -> matrix[0][...] => fir row and traverse for col
            int col0 = 1;

            //mark for the zeros
            for(int i = 0; i < r; i++){
                
                for(int j = 0; j < c; j++){
                    if(matrix[i][j] == 0){

                        //mark the i-th row
                        matrix[i][0] = 0;
                        //mark the j-th col
                        if(j != 0) matrix[0][j] = 0;
                        else col0 = 0;

                    }
                }
            }

            //set the required cell to zero
            for(int i = 1; i < r; i++){

                for(int j = 1; j < c; j++){

                    if(matrix[i][j] != 0){

                        if(matrix[i][0] == 0 || matrix[0][j] == 0){
                            matrix[i][j] = 0;
                        }

                    }
                }
            }

            if(matrix[0][0] == 0){
                for(int j = 0; j < c; j++){
                    matrix[0][j] = 0;
                }
            }

            if(col0 == 0){
                for(int i = 0; i < r; i++){
                    matrix[i][0] = 0;
                }
            }

            //print matrix
            cout<<"Zeros set by Optimized approach: "<<endl;
            printMatrix(matrix);

        }

};


int main(){
    SetZeros obj;
    int r, c;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    vector<vector<int>> matrix(r, vector<int>(c));
    cout<<"Enter matrix elements: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>matrix[i][j];
        }
    }

    //set zeros by brute force method
    // obj.bruteForce(matrix);

    //set zeros by better approach
    // obj.betterApproach(matrix);

    //set zeros by optimized approach
    obj.optimalApproach(matrix);

    return 0;
}