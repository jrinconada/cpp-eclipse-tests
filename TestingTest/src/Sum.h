/*
 * Adds numbers between min and max
 * */
class Sum {
	int min, max;
public:
	Sum() : min(0), max(10) {}
	Sum(int min, int max) : min(min), max(max) {}
	int sum(int a, int b) {
		if (a < min || a > max) throw "a is out of range";
		if (b < min || b > max) throw "b is out of range";
		return a + b;
	}
};
