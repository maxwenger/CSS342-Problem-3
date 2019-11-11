long factorial(int x);

long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
	if(M == 0 || N == 0) {
		return 0;
	}

	// Need them to be zero indexed
	M -= 1;
	N -= 1;

	long possablePathsM = factorial(M);
	long possablePathsN = factorial(N);
	long numerator = factorial(M + N);

	return numerator / (possablePathsM * possablePathsN);
}

long factorial(int x) {
	long sum = 1;
	while(x > 0) {
		sum *= x;
		x--;
	}

	return sum;
}
