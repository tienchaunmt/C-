#include <iostream>

using namespace std;

int main() {
    long long x1, y1, x2, y2;
    int x3, y3, x4, y4;
    long long >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    long long a = min(max(x1, x2), max(x3,x4)) - max(min(x1, x2), min(x3, x4));
    long long b = min(max(y1, y2), max(y3,y4)) - max(min(y1, y2), min(y3, y4));
    if (a > 0 && b > 0) cout << a*b;
    else cout << 0;
    return 0;
}