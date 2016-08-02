int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    

    int count=0;
    int temp=0;
    
    if(A<=0)
    {
        return 0;
    }
    while(1)
    {
        if(A==1)
        {
          return 1;
            
        }
        else
        {
        temp=A%2;
        A=A/2;
        if(temp==1)
        count++;
        if(A==1)
        {
            count++;
            return count;
        }
        }
        
    }


}
