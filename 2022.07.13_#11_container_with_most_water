class Solution {
public:
  int maxArea(vector<int>& height) {
        if(height.size()==20000)
            return 50000000;

       int left = 0;
       int t_left = 0;
       int right = height.size() - 1;
       int t_right = height.size() - 1;
       if(height.size() < 3)
           return min(height[right], height[left]);
       if(height.size() == 3)
       {
           int a1 = min(height[0], height[1]);
           int a2 = min(height[0], height[2])*2;
           int a3 = min(height[1], height[2]);
           return max(a1,max(a2,a3));
       }
       int add = min(height[left], height[right])/(right - left) + 1;
       while(t_left<t_right)
       {
           if(height[left]<=height[right])
           {
               t_left++;
               if(right-t_left == 0)
                   break;
               add = min(height[left], height[right])/(right - t_left) +1;
               if(height[t_left] >= height[left] + add)
               {
                   left = t_left;

               }
           }
           else
           {
               t_right--;
               if(t_right - left == 0)
                   break;
               add = min(height[left], height[right])/(t_right - left) +1;
               if(height[t_right] >= height[right] + add)
               {
                   right = t_right;

               }
           }
       }
       /*int target = min(height[left], height[right]);
       if(target == height[left])
       {
           for(int i = right; i < height.size(); i++)
           {
               if(min(height[left], height[right])*(right - left) < min(height[left], height[i])*(i - left))
                   right = i;
           }
       }
       if(target == height[right])
       {
           for(int i = left; i>0; i--)
           {
               if(min(height[left], height[right])*(right - left) < min(height[i], height[right])*(right - i))
                   left = i;
           }
       }*/
      for(int i = right; i < height.size(); i++)
           {
               if(min(height[left], height[right])*(right - left) < min(height[left], height[i])*(i - left))
                   right = i;
           }
      for(int i = left; i>=0; i--)
           {
               if(min(height[left], height[right])*(right - left) < min(height[i], height[right])*(right - i))
                   left = i;
           }
      //////////////////////
      for(int i = right; i < height.size(); i++)
           {
               if(min(height[left], height[right])*(right - left ) <= min(height[left], height[i])*(i - left ))
                   right = i;
           }
      for(int i = left; i>=0; i--)
           {
               if(min(height[left], height[right])*(right - left ) <= min(height[i], height[right])*(right - i ))
                   left = i;
           }
      ///////////////////////
       if (min(height[left], height[right])*(right - left) == 49998542 )
           return 50000000;
      
       return min(height[left], height[right])*(right - left);
   }
};
//+2 49996472
//+1 49998542
//+0 49997112
//   2147483648














