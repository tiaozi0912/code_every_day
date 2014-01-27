/****************************************
 * Find the sub array with the biggest sum.
 * E.x. 
 * [-1, 1, 5, 4, -1] => sub array with biggest sum is [1, 5, 4]
 * [-1, 1, 5, 4, -1, 2] => sub array with biggest sum is [1, 5, 4, -1, 2]
 *****************************************/

 Vector<int> findLongest(Vector<int>& nums){
  int startPoint=0;
  int endPoint;
  int maxSum=nums[0];
 Vector<int> count;
 count.add(nums[0]);

 for(int i=0;i<nums.size()-1;i++){
     if(count[i]>=0){
        int newN=count[i]+nums[i+1];
        count.add(newN);
     }else{
        count.add(nums[i+1]);
        startPoint=i+1;
     }
     if(count[i+1]>maxSum){
         maxSum=count[i+1];
         endPoint=i+1;
     }
     if(startPoint>endPoint){
         startPoint=endPoint;
     }
 }
 Vector<int> result;
 for(int i=0;i<endPoint-startPoint+1;i++){
     result.add(nums[startPoint+i]);
 }

 return result;
}
