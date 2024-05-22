/*Problem
You have been given an integer array A and a number K. Now, you need to find out whether any two different elements of the array A sum to the number K. Two elements are considered to be different if they lie at different positions in the array. If there exists such a pair of numbers, print "YES" (without quotes), else print "NO" without quotes.*/

// solution

#include <iostream>
using namespace std;
const int a=1e7+10;
int A[a];
int B[a];
int main() {
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		B[A[i]]++;
	}
	int answ=0;
	for(int i=0;i<n;i++)
	{
		if(k-A[i]==A[i])
		{
			if(B[k-A[i]]>1)
			answ++;
		}
		else
		{
			if(B[k-A[i]]>0)
			answ++;
		}
	}
	if(answ>0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}