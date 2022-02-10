import java.util.Scanner;

public class hex_to_binary_conversion {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Hexdecimal No. : ");
        char[] n = s.next().toCharArray();

        long ans = 0;
        int i = 0;
        while (i < n.length) {
            int temp = str_to_int(n[i]);
            ans = (ans * 10000) + decimal_to_binary(temp);
            i++;
        }

        System.out.println("The Binary of given Hexadecimal No. is " + ans + ".");
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

    public static int str_to_int(char x) {
        if (x >= 'A' && x <= 'F')
            return (x - 'A' + 10);
        else
            return (x - '0');
    }
}