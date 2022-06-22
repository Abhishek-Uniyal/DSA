class Solution
{
    public:
    void sort012(int a[], int n)
    { int k=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            continue;
            
            else
            {
                k++;
                a[i]=a[k];
                a[k]=0;
            }
        }
        
        for(int i=k+1;i<n;i++)
        {
            if(a[i]!=1)
            continue;
            
            else
            {
                k++;
                a[i]=a[k];
                a[k]=1;
            }
        }
    }
    
};
