
#include <iostream>
using namespace std;
#include<vector>
#include<math.h>
int main() {
    vector<int>digits;
     digits.push_back(1);
        digits.push_back(2);
        digits.push_back(3);
        //digits.push_back(1);

        int n=digits.size();
        int size1=digits.size();
        int size2=size1;
        int sum=0;
       
        for (int i=0; i<n; i++)
        {
            sum +=(digits[i]*pow(10,size1-1));
            size1--;
        }
        //std::cout<<sum;
        int result=sum+1;
        //cout<<result;
        int solution;
        vector<int>answer;
        while(result>0)
        {
            solution=result/pow(10, size2-1);
            answer.push_back(solution);
            result=result-(solution*pow(10,size2-1));
            size2--;
        }
        for(int i=0; i<answer.size(); i++)
        {
            cout<<answer[i]<<endl;
            
        }
    

    return 0;
}