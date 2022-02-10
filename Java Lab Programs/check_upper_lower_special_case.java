import java.util.Scanner;

public class check_upper_lower_special_case {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any character ");
        char ch = sc.next().charAt(0);

        if (ch >= 'A' && ch <= 'Z')
            System.out.print("'" + ch + "' is in Uppercase.");
        else if (ch >= 'a' && ch <= 'z')
            System.out.print("'" + ch + "' is in Lowercase.");
        else
            System.out.print("'" + ch + "' is a Special Character.");

        sc.close();
    }
}