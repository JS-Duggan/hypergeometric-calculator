#include <algorithm>

long double choose(long double n, long double k) {
    if (k > n) {
        return 0;
    }
    long double r = 1;
    for (long double d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

class GeometricCalculator {
public:
	GeometricCalculator(int N, int n) : N(N), n(n){};
	long double prob_exact(long double S, long double k);
    long double prob_atleast(long double S, long double k);

private:
	int N, n;
};


long double GeometricCalculator::prob_exact(long double S, long double k) {
	long double t1, t2, t3;
	t1 = choose(S, k);
	t2 = choose(N - S, n - k);
	t3 = choose(N, n);
	return (t1 * t2) / t3;
}

long double GeometricCalculator::prob_atleast(long double S, long double k) {
    long double p = 0;
    int cap = std::min(n, static_cast<int>(S));
    for (int i = k; i <= cap; i++) {
        p += prob_exact(S, i);
    } 
    return p;
}