#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&A,int l,int mid,int r){
    int an=mid-l+1;
    int bn= r-mid;
    int a[an],b[bn];
    for(int i=0;i<an;i++)
    a[i]=A[l+i];
    for(int i=0;i<bn;i++)
    b[i]=A[mid+1+i];
    int i=0,j=0,k=l;
    while(i<an && j<bn)
    {
        if(a[i]<b[j])
        A[k++]=a[i++];
        else
        A[k++]=b[j++];
    }
    while(i<an)
    A[k++]=a[i++];
    while(j<bn)
    A[k++]=b[j++];
}
void mergesort(vector<int>&A,int l, int r ){
    if(l>=r)
    return;
    int mid=(l+r)/2;
    mergesort(A,l,mid);
    mergesort(A,mid+1,r);
    merge(A,l,mid,r);
}
bool func(vector<int>&heaters, vector<int>&houses, int radius) {
	int i = 0, j = 0;
	while (i < heaters.size() and j < houses.size()) {
		if (abs(heaters[i] - houses[j]) <= radius)
			j++;
		else
			i++;
	}
	if (i < heaters.size())
		return true;
	return false;
}
int main()
{
    int num_houses, num_heaters;
		cin >> num_houses >> num_heaters;
		vector<int>houses, heaters;
		for (int i = 0; i < num_houses; i++) {
			int x;
			cin >> x;
			houses.push_back(x);
		}
		for (int i = 0; i < num_heaters; i++) {
			int x;
			cin >> x;
			heaters.push_back(x);
		}
		mergesort(heaters,0,num_heaters-1);
		mergesort(houses,0,num_houses-1);
		int l = 0, r = 1e9;
		while (r - l > 1) {
			int mid = (l + r) / 2;
			if (func(heaters, houses, mid)) {
				r = mid;
			}
			else
				l = mid;
		}
		if (func(heaters, houses, l)) {
			cout<<"Minimum Radius = "<< l << endl;
		}
		else
			cout<<"Minimum Radius = " << r << endl;
        
    return 0;
}