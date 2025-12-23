Even better efficiency is obtained by computing $n!$ from its prime factorization, based on the principle that exponentiation by squaring is faster than expanding an exponent into a product. An algorithm for this by Arnold Schönhage begins by finding the list of the primes up to $n$, for instance using the sieve of Eratosthenes, and uses Legendre's formula to compute the exponent for each prime. Then it computes the product of the prime powers with these exponents, using a recursive algorithm, as follows:

1. Use divide and conquer to compute the product of the primes whose exponents are odd

2. Divide all of the exponents by two (rounding down to an integer), recursively compute the product of the prime powers with these smaller exponents, and square the result

3. Multiply together the results of the two previous steps