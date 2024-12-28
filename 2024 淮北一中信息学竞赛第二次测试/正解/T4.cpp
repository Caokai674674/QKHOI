#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("T4.in","r",stdin);
	freopen("T4.out","w",stdout);
    int a;
    cin >> a;

    vector<pair<int, int>> vec(a);

    for(int i = 0; i < a; i++) {
        int n;
        cin >> n;
        int saturation = (n / 20) * 40 + ((n % 20) / 10) * 15 + (n % 10) * 1;
        vec[i] = make_pair(n, saturation);
    }

    sort(vec.begin(), vec.end(), greater<pair<int, int>>());

    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}