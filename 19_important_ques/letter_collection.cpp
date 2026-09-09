#include<bits/stdc++.h>
using namespace std;

class LetterCollection{
    public:
        vector<int> matrix_sum(vector<vector<int>>& mt, vector<vector<int>>& qury){
            int n = mt.size(); //rows
            int m = mt[0].size(); //columns
            vector<int> sum;

            //for 1-hop distance
            vector<pair<int, int>> hop1 = {
                {-1, -1}, {-1, 0}, {-1, 1},
                {0, -1},           {0, 1},
                {1, -1},  {1, 0},  {1, 1}
            };

            //for 2-hop distance
            vector<pair<int, int>> hop2 = {
                {-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2},
                {-1, -2},                             {-1, 2},
                {0, -2},                              {0, 2},
                {1, -2},                              {1, 2},
                {2, -2},  {2, -1},  {2, 0},  {2, 1},  {2, 2}
            };

            for(const auto& q: qury){
                int type = q[0]; //get type of hop
                int r = q[1]; //row
                int c = q[2]; //column
                int curr_sum = 0;

                const auto& dirs = (type == 1) ? hop1 : hop2;

                for(const auto& dir: dirs){
                    int nr = r + dir.first;
                    int nc = c + dir.second;

                    if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                        curr_sum += mt[nr][nc];
                    }
                }
                sum.push_back(curr_sum);
            }

            return sum;

        }
};

int main(){
    LetterCollection obj;
    int n, m, x, y;
    cout<<"Enter row and column for matrix: ";
    cin>>n>>m;
    cout<<"Enter row and column for query (should be less than matrix): ";
    cin>>x>>y;

    vector<vector<int>> mt(n, vector<int>(m));
    vector<vector<int>> qury(x, vector<int>(y));

    cout<<"Enter elements of matrix: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>mt[i][j];
        }
    }

    cout<<"Enter elements of qury: ";
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin>>qury[i][j];
        }
    }

    vector<int> result = obj.matrix_sum(mt, qury);
    cout<<"Sum for query is: ";
    for(auto ele: result){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}