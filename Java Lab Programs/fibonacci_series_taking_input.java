import java.util.Scanner;

public class fibonacci_series_taking_input {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the Number upto which you want Fibonacci Series : ");
        int n = s.nextInt();
        int a = 0, b = 1;
        System.out.println("The Fibonacci Series is : ");
        for (int i = 1; i <= n; i++) {
            System.out.print(b + " ");
            int temp = b;
            b = a + b;
            a = temp;
        }
        s.close();
    }
}
