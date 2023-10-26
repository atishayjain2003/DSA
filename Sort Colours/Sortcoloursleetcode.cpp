// Leetcode question 75 Arrays
// Medium Difficulty
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
    int i=0;
    int a=0; int b=0; int c=0;
    for(i=0; i<size; i++)
    {
        if(nums[i]==0)
        {
            a++;

        }
        else if(nums[i]==1)
        {
            b++;
        }
        else{
            c++;
        }
        

    }
    //cout<<"The total zeroes are "<< a << endl;
    //cout<<"The total ones are "<< b <<endl;
    //cout<<"The total two's are "<< c;
    int k=0;
    for(k=0; k<a; k++)
    {
        nums[k]=0;
    }
    for(k=a; k<(a+b); k++)
    {
        nums[k]=1;
    }
    for(k=(a+b); k<size; k++)
    {
        nums[k]=2;
    }
    cout<<"The sorted array is "<< endl;
    for(k=0; k<size; k++)
    {
        cout<<nums[k]<<" ";
    }
        
    }
};