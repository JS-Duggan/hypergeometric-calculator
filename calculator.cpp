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

class GeometricCaluclator {
public:
	GeometricCaluclator(int N, int n) : N(N), n(n){};
	long double prob(long double S, long double k);

private:
	int N, n;
};


long double GeometricCaluclator::prob(long double S, long double k) {
	long double t1, t2, t3;
	t1 = choose(S, k);
	t2 = choose(N - S, n - k);
	t3 = choose(N, n);
	return (t1 * t2) / t3;
}
