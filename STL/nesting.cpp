//KKD
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	map<int,multiset<string>>m;
	for(int i=0;i<n;i++)
	{
		string student;
		int marks;
		cin>>student>>marks;
		m[marks].insert(student);
	}
	auto it=--(m.end());
	while(it!=m.begin()){
		auto mark=(*it).first;
		auto name=(*it).second;
		for(auto value:name)
		cout<<value<<" "<<mark<<endl;
		it--;
	}
	auto i=m.begin();
	auto mark=(*i).first;
	auto name=(*i).second;
	for(auto value:name)
	cout<<value<<" "<<mark<<endl;
    return 0;
}