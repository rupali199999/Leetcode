<h2>4sum Notes</h2><hr>instead of adding all elements in one go, all elements r added one by one,

@udayprakashharsh2805
4 months ago
This is because the nums[i] is int so if we assume all the 4 quad to be 1e9 then the result would be 4*1e9 which will lead to overflow int error
to avoid this we are separately calculating the sum for all the 4 array elements.