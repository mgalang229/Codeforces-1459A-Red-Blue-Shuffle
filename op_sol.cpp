#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	string rd, bl;
	cin >> rd >> bl;
	int nr=0, nb=0;
	//count the ff: 
	//nr=number digits in red that are greater than blue
	//nb=number digits in blue that are greater than red
	for(int i=0; i<n; ++i) {
		if(rd[i]>bl[i])
			nr++;
		else if(rd[i]<bl[i])
			nb++;
	}
	if(nr==nb)
		cout << "EQUAL";
	else if(nr>nb)
		cout << "RED";
	else
		cout << "BLUE";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
