#include<bits/stdc++.h>
using namespace std;
const int a = 1e5 ;
vector<int>divisor[a];
int main()
{


    for (int i = 1; i < a; i++) {
        for (int j = i; j < a; j += i)
            divisor[j].push_back(i);
    }

    for (auto i : divisor[40])
        cout << i << " ";
    cout << endl;



    return 0;
}