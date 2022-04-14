

int reverse(int x)
{
if(x>=pow(-2,31) && x<=pow(2,31)-1)
{   long int sum=0,r=0;
    while(x!=0)
    {   r=x%10;
        x=x/10;
        sum=sum*10+r;  
    }
 if(sum>=pow(-2,31) && sum<=pow(2,31)-1)
 {
 return sum;
 }
 else return 0;
}
else 
return 0;
}