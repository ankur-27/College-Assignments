import java.util.Scanner;

public class binary_to_octal_conversion {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Binary No. ");
        long n = s.nextLong();
        long x = n;

        long ans = 1;
        while (x != 0) {
            long temp = x % 1000;
            x = x / 1000;
            ans = (ans * 10) + binary_to_decimal(temp);
        }

        long cor_ans = 0;
        while (ans != 1) {
            long temp = ans % 10;
            ans = ans / 10;
            cor_ans = (cor_ans * 10) + temp;
        }

        System.out.print("The Octal No. of the Binary " + n + " is " + cor_ans + ".");
        s.close();
    }

    public static long binary_to_decimal(long n) {
        long ans = 0;
        int i = 1;
        while (n != 0) {
            long temp = n % 10;
            n = n / 10;
            ans = ans + (temp * i);
            i = i * 2;
        }
        return ans;
    }
}