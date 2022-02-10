import java.util.Scanner;

public class arithmatic_operation_taking_input {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter 1st Number ");
        int a = s.nextInt();
        System.out.println("Enter 2nd Number ");
        int b = s.nextInt();

        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));
        System.out.println("a % b = " + (a % b));
        s.close();
    }
}
