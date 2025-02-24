class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1 = num1.length() - 1;
        int end2 = num2.length() - 1;
        int carry = 0;
        string result = "";

        while (end1 >= 0 || end2 >= 0 || carry > 0) {
            int digit1 = (end1 >= 0) ? num1[end1] - '0' : 0;
            int digit2 = (end2 >= 0) ? num2[end2] - '0' : 0;
            int sum = digit1 + digit2 + carry;

            carry = sum / 10;
            result.push_back((sum % 10) + '0');

            end1--;
            end2--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
