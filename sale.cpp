#include <iostream>
using namespace std;

int main() {
    float n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    if (n > b) cout << n*(1-(y/100));
    else if (n > a) cout << n*(1-(x/100));
    else cout << n;
}