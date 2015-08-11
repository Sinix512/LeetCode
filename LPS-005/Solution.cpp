#include "StdAfx.h"
#include "Solution.h"


Solution::Solution(void)
{
}


Solution::~Solution(void)
{
}

string Solution::longestPalindrome(string s)
{
	string result;
	for(int i = 0; i < s.size(); i++)
	{
		int cnt = 0;
		if(i - cnt == -1 || i + cnt + 1 == s.size())
			continue;
		while(s[i - cnt] == s[i + cnt + 1])
		{
			cnt++;
			if(i - cnt == -1 || i + cnt + 1 == s.size())
			{
				break;
			}
		}
		if(cnt * 2 > (int)result.size())
		{
			result = s.substr(i - cnt + 1, cnt * 2);
		}
	}
	return result;
}
