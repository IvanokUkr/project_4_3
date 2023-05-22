#include <iostream>
using namespace std;

int reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int num_rev = reverse(num);
    cout << "The reverse " << num << " --- " << num_rev << endl;

    return 0;
}
