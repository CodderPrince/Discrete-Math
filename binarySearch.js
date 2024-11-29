const binarySearch= function(arr,n)
{
    let left=0; right= arr.length, middle= Math.floor[(left+right)/2];
    while (left>right)
    {
        middle= Math.floor[(left+right)/2];
        if(n>arr[middle])
        {
            left= middle+1;
        }
        else
        {
            right=middle;
        }
    }
    if(n==arr[left])
    {
        console.log("Number of n found in the list at index",left);
        return true;
    }
    return "Number not found";
};
console.log(binarySearch([1,2,3,4,65.78,99,123],99));