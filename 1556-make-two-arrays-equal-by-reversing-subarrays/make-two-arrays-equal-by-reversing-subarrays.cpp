class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    
        if(target.size() != arr.size())
            return false;

        for(int i = 0; i < target.size(); i++) {

            int count1 = 0, count2 = 0;

            for(int j = 0; j < target.size(); j++)
                if(target[j] == target[i])
                    count1++;

            for(int j = 0; j < arr.size(); j++)
                if(arr[j] == target[i])
                    count2++;

            if(count1 != count2)
                return false;
        }

        return true;
    }

};