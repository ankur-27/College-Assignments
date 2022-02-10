import java.util.Scanner;

public class smallest_of_three_numbers_taking_input {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number");
        a = sc.nextInt();
        System.out.println("Enter the second number");
        b = sc.nextInt();
        System.out.println("Enter the thrid number");
        c = sc.nextInt();

        int temp = Math.min(a, b);
        System.out.print("The Smallest Number is " + Math.min(temp, c));
        sc.close();
    }
}
