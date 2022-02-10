import java.util.Scanner;

public class roots_of_quadratic_equation {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the value of 'a' (cofficient of 'x2') ");
        double a = scan.nextInt();
        System.out.print("Enter the value of 'b' (cofficient of 'x') ");
        double b = scan.nextInt();
        System.out.print("Enter the value of 'c' (constant term) ");
        double c = scan.nextInt();

        double d = (b * b) - (4 * a * c);
        if (d > 0) {
            double r1 = (-b + Math.sqrt(d)) / (2 * a);
            double r2 = (-b - Math.sqrt(d)) / (2 * a);
            System.out.print("The roots of the given quadratic equation are " + r1 + " & " + r2);
        } else if (d == 0) {
            double r = (-b / (2 * a));
            System.out.print("The root of the given quadratic equation is " + r);
        } else
            System.out.print("The roots are not real.");

        scan.close();
    }
}