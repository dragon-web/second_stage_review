#include<iostream>
#include<vector>

using namespace std;

#define Size 5

int Find(vector<int> &vi, int val)
{
    if (vi.empty())
        return -1;
    for (size_t i = 0; i < vi.size(); ++i)
    {
        if (vi[i] == val)
            return i;

    }
    return -1;

}

int func(vector<vector<int>> &vi)
{
    if (vi.empty())
        return -1;
    int row = vi.size();
    int col = Size;
    vector<vector<bool>> jg(row,vector<bool>(col,false));
    for (int i = 0; i < col; ++i)
    {
        jg[0][i] = true;
    }
    for (int i = 1; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (vi[i][j] == 0)
            {
                continue;

            }
            auto it = Find(vi[i - 1],vi[i][j]);
            if (it != -1 && jg[i - 1][it] == true)
            {
                jg[i][j] = true;

            }

        }

    }
    for (int i = 0; i < col; ++i)
    {
        if (jg[row - 1][i] == true)
            return vi[row - 1][i];

    }
    return -1;

}
int main()
{
    vector <vector <int>> dp = { {0,1,2,3},{2,3},{3,4}};
    
    int ret = func(dp);

    cout << ret << endl;
    return 0;

}
