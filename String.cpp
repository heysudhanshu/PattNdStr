#include<bits/stdc++.h>
using namespace std;
void Anagrams(string str1, string str2)
{
	int l1,l2;
	if ((l1=str2.length())>(l2=str1.length()))
		return;
	unordered_multiset<char>check1;
	unordered_multiset<char>check2;
	for (int i = 0; i < l1; i++)
		check2.insert(str2[i]);
	for (int i=0;i<l2;i++)
	{
		if (i<l1)
			check1.insert(str1[i]);

		else
		{
			if (check1==check2)
			{
				cout <<"Substring "<<str1.substr(i-l1,l1)<<" present at index "<<i-l1<<"\n";
			}
			auto itr = check1.find(str1[i-l1]);
			if (itr!=check1.end())
				check1.erase(itr);
			check1.insert(str1[i]);
		}
	}
	if (check1==check2)
	{
		cout<<"Substring "<<str1.substr(l2-l1,l1)<<" present at index " << l2-l1 <<"\n";
	}
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	Anagrams(str1,str2);
	return 0;
}
