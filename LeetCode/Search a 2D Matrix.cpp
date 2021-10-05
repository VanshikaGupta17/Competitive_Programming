//Search a 2D Matrix -- Medium
/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/

/*
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        std::vector<int>::iterator it;
        vector<int> res;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res.push_back(matrix[i][j]);
            }
        }
            it = std::find(res.begin(),res.end(), target);
            if (it != res.end())
            {
                return true;
            }
        return false;
    }
};
