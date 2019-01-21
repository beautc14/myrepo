#include <stdio.h>

int power_helper (int base, int ans, int mul, int count) {
    if (count==mul) {
        return ans; 
    }
    else { 
        ans = ans*base;
        power_helper(base, ans, mul, count+1);
    }
}

int power (int base, int mul) {
    power_helper (base,1, mul, 0);
}

int find_range (int number) {
   int range = 0;
   for (int i=6; i<=8; i++) {
       if (power(10,i)<=number && number<power(10,i+1)) {
           range = i+1;
           break;
       }
   }
   return range;
}

void in_array (int answer, int* ptr, int number) {
        for (int i=number; i>0; i--) {
        *ptr = (answer%power(10,i))/power(10,i-1);
        ptr++;
    }
}

void count_number (int num, int* ptr, int max) {
    int count =0;
    for (int i=0; i<max; i++) {
        if (*ptr==num) {
            count++;
        }
        ptr++;
    }
    printf ("%d\n",count);
}

void number_of_number() {
    int A, B, C;
    scanf ("%d",&A);
    scanf ("%d",&B);
    scanf ("%d",&C);
    int ans = A*B*C;
    int max = find_range(ans);
    int array[max];
    int* ptr = &array[0];
    in_array(ans, ptr, max);
    ptr = &array[0];
    for (int i=0; i<10; i++) {
        count_number(i, ptr, max);
    }
}

int main (void) {
    number_of_number();
    return 0;
}