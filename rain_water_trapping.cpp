class Solution {
public:
	int trap(vector<int>& height) {
		int ans = 0;
		int left[2 * 1000] = {0};
		int right[2 * 1000] = {0};
		int leftmax = 0, rightmax = 0;
		for (int i = 0; i < height.size(); i++)
		{
			if (height[i > leftmax])
			{
				left[i] = height[i];
				leftmax = height[i];
			}
			else
			{
				left[i] = leftmax;
			}
		}
		for (int i = height.size() - 1; i >= 0; i--)
		{
			if (height[i] > rightmax)
			{
				right[i] = height[i];
				rightmax = height[i];
			}
			else
			{
				right[i] = rightmax;
			}
		}
		int sum = 0;
		int s;
		for (int i = 0; i < height.size(); i++)
		{
			s = min(left[i], right[i]) - height[i];
			sum += s;
		}
		return sum;
	}
};