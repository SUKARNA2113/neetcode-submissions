class Solution {
public:
    bool isPalindrome(string s) {

        int start = 0;
        int rear = s.size() - 1;

        while (start < rear) {

            while (start < rear && !isalnum(s[start]))
                start++;

            while (start < rear && !isalnum(s[rear]))
                rear--;

            if (tolower(s[start]) != tolower(s[rear]))
                return false;

            start++;
            rear--;
        }

        return true;
    }
};