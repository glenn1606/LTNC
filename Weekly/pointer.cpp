#include <bits/stdc++.h>

using namespace std

void reverse(char *a) {
    char *end = a;
    while (*end) ++end;
    --end;
    while (a < end) {
        char temp = *a;
        *a = *end;
        *end = temp;
        ++a;
        --end;
    }
}

// xoa ky tu c
void delete_char(char *a, char c) {
    char *dst = a;
    while (*a) {
        if (*a != c) {*dst = *a ; dst++;}
        ++a;
    }
    *dst = '\0'; // danh dau ket thuc chuoi
}

// don trai
void pad_left(char *a, int n) {
    int len = 0;
    char *end = a;
    while (*end) {
        ++end;
        ++len;
    }
    if (len >= n) return;
    int diff = n - len;
    for (int i = len; i >= 0; --i)
        a[i + diff] = a[i];
    for (int i = 0; i < diff; ++i)
        a[i] = ' ';
}

//cat xau
void truncate(char *a, int n) {
    char *end = a;
    while (*end) ++end;
    if (end - a > n) a[n] = '\0';
}

//palindrome
bool is_palindrome(char *a) {
    char *end = a;
    while (*end) ++end;
    --end;
    while (a < end) {
        if (*a != *end) return false;
        ++a;
        --end;
    }
    return true;
}

void trim_left(char *a) {
    char *start = a;
    while (*start == ' ') {
        ++start;
    }
    char *dst = a;
    while (*start) {
        *dst++ = *start++;
    }
    *dst = '\0';
}
void trim_right(char *a) {
    char *end = a;
    while (*end) ++end;
    while (end > a && *(end - 1) == ' ') --end;
    *end = '\0';
}

int main() {
    char str1[] = "hello world";
    char str2[] = "  abc  ";
    char str3[] = "racecar";
    char str4[] = "   text   ";

    // Test reverse
    reverse(str1);
    cout << "Reverse: [" << str1 << "]\n";

    // Test delete_char
    delete_char(str1, 'l');
    cout << "Delete 'l': [" << str1 << "]\n";

    // Test pad_right
    pad_right(str2, 10);
    cout << "Pad Right: [" << str2 << "]\n";

    // Test pad_left
    char str5[20] = "abc";
    pad_left(str5, 10);
    cout << "Pad Left: [" << str5 << "]\n";

    // Test truncate
    truncate(str1, 5);
    cout << "Truncate: [" << str1 << "]\n";

    // Test is_palindrome
    cout << "Is Palindrome: " << (is_palindrome(str3) ? "true" : "false") << "\n"; // Expect: true

    // Test trim_left
    trim_left(str4);
    cout << "Trim Left: [" << str4 << "]\n"; // Expect: "text   "

    // Test trim_right
    trim_right(str4);
    cout << "Trim Right: [" << str4 << "]\n"; // Expect: "text"

    return 0;
}
