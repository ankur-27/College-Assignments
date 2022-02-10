import java.util.Scanner;

public class binary_to_hexa_conversion {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Binary No. ");
        long n = s.nextLong();
        long x = n;

        String ans = "\0";
        while (x != 0) {
            long temp = x % 10000;
            x = x / 10000;
            ans = binary_to_decimal(temp) + ans;
        }
        System.out.print("The Hexadecimal No. of the Binary " + n + " is " + ans + ".");
        s.close();
    }

    public static String binary_to_decimal(long n) {
        long ans = 0;
        int i = 1;
        while (n != 0) {
            long temp = n % 10;
            n = n / 10;
            ans = ans + (temp * i);
            i = i * 2;
        }

        if (ans >= 0 && ans <= 9)
            return String.valueOf(ans);
        else {
            char y = (char) ((ans - 10) + 'A');
            return String.valueOf(y);
        }
    }
}
