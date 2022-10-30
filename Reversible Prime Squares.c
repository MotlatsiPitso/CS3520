#include <stdio.h>
#include <stdbool.h>

#include<math.h>





//Functions
int reverse(int num)
{
	int r;
	int reverse=0;
	while(num!=0)
	{
		r=num%10;
		reverse= (reverse*10)+r;
		num=num/10;
	}
	return reverse;
}

bool primechecker2(int num)
{
	int i;
	bool isPrime=true;
	
	if(num==0 || num==1 )
	{
		isPrime=false;
	}
	
	for(i=2;i<=(num)/2;i++)
	{
		if(num%i == 0)
		{
			isPrime=false;
			break;
		}
		
	}
	return isPrime;
}

bool not_palindrome(int num)
{
	bool isPaledrome=true;
	if(reverse(num)==num)
	{
		isPaledrome = false;
	}
	return isPaledrome;
}

bool isPerfect(long num)
{
	int i;
    for(i=1; i * i <= num; i++ )
    {
        if((num % i == 0) && (num / i == i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
	int j=0;
	int k,x,s,l;

	for(k=0;k>=0;k++)
	{
		
		int s = reverse(k);

        if(isPerfect(k) == true && isPerfect(s) == true)
        {
            x = sqrt(k);
            l = sqrt(s);

            if(primechecker2(x) == 1 && primechecker2(l))
            {
                if(not_palindrome(k))
                {
                    printf("%d \n",k);
                    j++;
                    if(j==10)
                    {
                    	break;
					}
                }

            }
        }
			
	}

	
	return 0;
}
