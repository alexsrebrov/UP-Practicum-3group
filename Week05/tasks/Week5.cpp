#include <iostream>

char changeCase(char symbol) {
    if (symbol >= 'A' && symbol <= 'Z') {
        return symbol + ('a' - 'A');
    }
    if (symbol >= 'a' && symbol <= 'z') {
        return symbol - ('a' - 'A');
    }
    return '$';
}

int charToInt(char s) {
    if (s >= '0' && s <= '9') {
        return s - '0';
    }
    return -1;
}
char intToChar(int num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    }
    return '@';
}
long long pow(int base, int exp) {
    long long res = 1;
    while (exp > 0) {
        res *= base;
        exp--;
    }
    return res;
}
int getRemainder(int a, int b) {
    while (a >= b) {
        a -= b;
    }
    return a;
}
bool isTriangle(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}
long long arithmeticProgression(int a,int d,int n) {
    return a + (n - 1) * d;
}
long long geometricProgression(int a, int q, int n) {
    return a * pow(q, n - 1);
}
int reverse(int num) {
    int res = 0;
    while (num > 0) {
        res += num % 10;
        num /= 10;
        res *= 10;
    }
    return res / 10;
}
int countDigits(int num) {
    if (num == 0) return 1;
    int res = 0;
    while (num > 0) {
        res++;
        num /= 10;
    }
    return res;
}
long long concat(int first, int second) {
    return  first * pow(10, countDigits(second)) + second;
}
long long countPermutations(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
long long countVariations(int n, int k) {
    return countPermutations(n) / countPermutations(n - k);
}
long long countCombinations(int n, int k) {
    return countPermutations(n) / (countPermutations(n - k) * countPermutations(k));
}
bool isSuffix(int first, int second) {
    int len = countDigits(second);
    int prob = first % (pow(10,len));
    return prob == second;
}
bool isPrefix(int first, int sec) {
    int lenOfFirst = countDigits(first);
    int lenOfSec = countDigits(sec);
    if (lenOfSec > lenOfFirst) return false;
    int diff = lenOfFirst - lenOfSec;
    first /= pow(10, diff);
    return first == sec;
}
bool isInfix(int first, int sec) {
    while (first && sec) {
        if (first % 10 != sec % 10) {
            first /= 10;
        }
        else {
            break;
        }
    }
    int len = countDigits(sec);
    first %= pow(10, len);
    return first == sec;
}
void cypher(int n) {
    char s;
    int last = 1;
    int specialCount = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z')) {
            std::cout << changeCase(s) << '\n';
            continue;
        }
        if (s >= '0' && s <= '9') {
            int curr = charToInt(s);
            std::cout << concat(last, curr) << '\n';
            last = curr;
            continue;
        }
        if (s == '@' || s == '!' || s == '#') {
            specialCount++;
            continue;
        }
        std::cout << s << '\n';
    }
    std::cout << "\nSpecial symbol count: " << specialCount << "\n";
}

int main()
{
    
}
