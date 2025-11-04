public:
    vector<int> majorityElement(vector<int>& nums) {
    //     map<int,int>mpt;
    //     vector<int>ans;
    //     for(int i=0;i<nums.size();i++){                //THESE ARE BETTER SOLUTION
    //         mpt[nums[i]]++;
    //     }
    //     for(auto i:mpt){
    //         if(i.second>nums.size()/3)
    //         ans.push_back(i.first);

    //     }
    //     return ans;
   
    int el1=INT_MIN,el2=INT_MIN,c1=0,c2=0;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        if(c1==0 && nums[i]!=el2){
            c1=1;
            el1=nums[i];
        }
        else if(c2==0 && nums[i]!=el1){c2=1;
            el2=nums[i];
        }
        else if(nums[i]==el1)c1++;
        else if(nums[i]==el2)c2++;
        else{
            c1--;
            c2--;
        }


    }
    c1=0,c2=0;
    for(int i=0;i<nums.size();i++){
        if(el1==nums[i]){c1++;}
        if(el2==nums[i]) c2++;
    }
    if(c1>nums.size()/3)ans.push_back(el1);
    if(c2>nums.size()/3)ans.push_back(el2);
    return ans;

    }

};
