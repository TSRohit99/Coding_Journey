#include<iostream>

using namespace std;

long long rec(long long x, long long y, long long m) {
    if (y == 0)
        return 1;

    if (y % 2 == 0) {
        int temp = rec(x, y / 2, m);
        return (temp * temp) % m;
    } else {
        int temp = rec(x, y - 1, m);
        return (temp * x) % m;
    }
}

int main() {
    long long x = 2374859;
    long long y = 3029382;
    long long m = 36123;
    cout << rec(x, y, m) << endl;
    return 0;
}
