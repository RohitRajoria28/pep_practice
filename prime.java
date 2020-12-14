import java.util.*;
import java.math.*;

public class prime {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("enter the no. of primes youu want :");
        int n = s.nextInt();
        int j = 0, flag = 0, p = 2;
        while (j < n) {
            flag = 0;
            for (int i = 2; i <= Math.sqrt(p); i++) {
                if (p % i == 0) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                System.out.println(p);
                j++;
            }
            p++;
        }
    }
}