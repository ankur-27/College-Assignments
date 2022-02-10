import java.util.Scanner;

public class decimal_to_binary_conversion {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Decimal No. : ");
        int n = s.nextInt();

        int x = n;
        long ans = 1;
        while (x != 0) {
            int temp = x % 2;
            x = x / 2;
            ans = (ans * 10) + temp;
        }

        long cor_ans = 0;
        while (ans != 0) {
            long temp = ans % 10;
            ans = ans / 10;
            cor_ans = (cor_ans * 10) + temp;
        }
        cor_ans = cor_ans / 10;

        System.out.println("The Binary No. of " + n + " is " + cor_ans + ".");
        s.close();
    }
}