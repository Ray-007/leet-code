class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned int num=n;
        int a[32];
        int index=0;
        for(int i=0;i<32;i++)
        {
            a[32-1-i]=num-2*(num>>1);
            if(a[32-1-i]!=0) index++;
            num=num>>1;
        }
        return index;
    }
};
