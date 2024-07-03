//Polycarp doesn't like integers that are divisible by 3
// or end with the digit 3
// in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.
//
//Polycarp starts to write out the positive (greater than 0
//) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…
//. Output the k
//-th element of this sequence (the elements are numbered from 1
//).

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf("%d", &k);
        int count = 0;
        int i = 1;
        
        while(1)
        {
            if(i % 3 != 0 && i % 10 != 3)
            {
                count++;
            }
            if(count == k)
            {
                printf("%d\n", i);
                break;
            }
            i++;  // Increment i to avoid infinite loop
        }
    }
    return 0;
}
