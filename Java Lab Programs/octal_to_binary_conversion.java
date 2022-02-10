import java.util.Scanner;

public class octal_to_binary_conversion {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Octal No. : ");
        int n = s.nextInt();

        int x = n;
        long ans = 1;
        while (x != 0) {
            int temp = x % 10;
            x = x / 10;
            ans = (ans * 1000) + decimal_to_binary(temp);
        }

        long cor_ans = 0;
        while (ans != 0) {
            long temp = ans % 1000;
            ans = ans / 1000;
            cor_ans = (cor_ans * 1000) + temp;
        }
        cor_ans = cor_ans / 1000;

        System.out.println("The Binary No. of " + n + " is " + cor_ans + ".");
        s.close();
    }

    public static int decimal_to_binary(int x) {
        int ans = 1;
        while (x != 0) {
            int temp = x % 2;
            x = x / 2;
            ans = (ans * 10) + temp;
        }

        int cor_ans = 0;
        while (ans != 0) {
            int temp = ans % 10;
            ans = ans / 10;
            cor_ans = (cor_ans * 10) + temp;
        }
        cor_ans = cor_ans / 10;

        return cor_ans;
    }
}
