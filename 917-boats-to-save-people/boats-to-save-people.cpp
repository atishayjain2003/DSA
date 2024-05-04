class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int x=people.size();
        int left=0;
        int right=x-1;
        int count=0;
        sort(people.begin(), people.end());
        while (left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                count++;
                left++;
                right--;
            }
            else if(people[right]<=limit)
            {
                count++;
                right--;
            }

        }
        return count;
        
    }
};