div(n, m) {
    accum = 0;
    quotient = 0;
    while (m < n - accum || m == n - accum) {
        accum = accum + m;
        quotient = quotient + 1;
    }
    return quotient;
}

remainder(n, m) {
    quotient = div(n, m);
    return n - m*quotient;
}

gcd(n, m) {
    rem = remainder(n, m);
    if (rem == 0) {
        return m;
    }
    return gcd(m, rem);
}

gcd_dijkstra(n, m) {
    if (n == m) {
        return n;
    }

    if (m < n) {
        return gcd(n - m, m);
    }

    return gcd(n, m - n);
}

print(gcd(72, 54));
print(gcd_dijkstra(72, 54));