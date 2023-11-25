/*A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.
*/

 int n=arr.size();
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        while(start<end)
        {
            if (arr[mid]<arr[mid+1])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
            mid=(start+end)/2;
        }
        return start;