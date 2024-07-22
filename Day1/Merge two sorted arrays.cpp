class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // to Merge nums2 into nums1
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }

        // to sort the merged array
        for (int i = 0; i < m + n - 1; i++)
        {
            for (int j = 0; j < m + n - i - 1; j++)
            {
                if (nums1[j] > nums1[j + 1])
                {
                    int temp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = temp;
                }
            }
        }
    }
};
