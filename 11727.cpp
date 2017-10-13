#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
	int num_cases;
	int i = 1, num;
	vector<int> nums;
	scanf("%d", &num_cases);
	while(num_cases--)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &num);
			nums.push_back(num);
		}
		sort(nums.begin(), nums.end());
		printf("Case %d: %d\n", i++, nums[1]);
		nums.clear();
	}
}