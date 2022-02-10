import java.util.Scanner;

public class binary_to_decimal_conversion {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Binary No. ");
        long n = s.nextLong();
        long x = n;

        long ans = 0;
        int i = 1;
        while (n != 0) {
            long temp = n % 10;
            n = n / 10;
            ans = ans + (temp * i);
            i = i * 2;
        }

        System.out.print("The Decimal No. of the Binary No. " + x + " is " + ans + ".");
        s.close();
    }
}