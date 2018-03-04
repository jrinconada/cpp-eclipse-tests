/*
 * Adds numbers between min and max
 * */
class Sum {
	int min, max;
public:
	Sum() : min(0), max(10) {}
	Sum(int min, int max) : min(min), max(max) {}
	int sum(int a, int b) {
		if (a < 0 || a > 10) throw "a is out of range";
		if (b < 0 || b > 10) throw "b is out of range";
		return a + b;
	}
};
